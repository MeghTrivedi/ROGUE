all:
	gcc -Wall -ansi -pedantic src/main.c src/objects.c src/borders.c src/controls.c -Iinclude -o bin/runMe -lncurses
