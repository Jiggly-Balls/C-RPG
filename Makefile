.PHONY: build rebuild compile run

ifeq ($(OS),Windows_NT)
    OS_NAME := windows
else
    UNAME_S := $(shell uname -s)
    OS_NAME := $(shell echo $(UNAME_S) | tr A-Z a-z)
endif

ifeq ($(OS_NAME),windows)
	TARGET := build/C-RPG.exe
else
	TARGET := build/C-RPG
endif

build:
	@echo Building meson in build/ directory.
	meson setup build

rebuild:
	@echo Rebuilding meson in build/ directory.
	meson setup --reconfigure build

compile:
	@echo Compiling project.
	meson compile -C build

run: compile
ifeq ($(OS_NAME),windows)
	cls
else
	clear
endif

	./$(TARGET)