{ pkgs ? import <nixpkgs> {} }:
let rowan-source = pkgs.fetchFromGitHub {
    owner = "Ki11erRabbit";
    repo = "rowan";
    rev = "main";
    hash = "sha256-7TBjbTy65cn1GjBR8HgaPfGrU62mm20CEY8cTxn5B3s=";
    };
    rowan = (pkgs.callPackage "${rowan-source}/rowan.nix" {});
in
pkgs.mkShell {
  buildInputs = with pkgs; [
    rustc
    cargo
    libunwind
    pkg-config
    rowan.rowan-runtime
    ncurses
  ];

  
    shellHook = ''
      export LD_LIBRARY_PATH=${pkgs.libunwind}/lib:$LD_LIBRARY_PATH
    '';
}
