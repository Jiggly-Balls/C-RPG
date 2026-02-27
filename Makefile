.PHONY: build rebuild compile run

build:
	meson setup build

rebuild:
	meson setup --reconfigure build

compile:
	meson compile -C build

run:
	build/C-RPG.exe