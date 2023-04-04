{ pkgs }: {
	deps = [
		pkgs.sam
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}