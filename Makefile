bin/C-RPG.exe: bin/main.o
	gcc bin/main.o -o bin/C-RPG.exe

bin/main.o: src/main.c
	gcc -c src/main.c -o bin/main.o
