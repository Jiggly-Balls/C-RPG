bin/C-RPG.exe: bin/main.o bin/terminal.o
	gcc bin/main.o bin/terminal.o -o bin/C-RPG.exe

bin/main.o: src/main.c
	gcc -Iinclude -c src/main.c -o bin/main.o

bin/terminal.o: src/utils/terminal.c include/utils/terminal.h
	gcc -Iinclude -c src/utils/terminal.c -o bin/terminal.o

run:
	./bin/C-RPG.exe