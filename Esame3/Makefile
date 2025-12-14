fatture: fatture.o main.o
	gcc -o fatture -g fatture.o main.o
fatture.o: fatture.h fatture.c
	gcc -c -g fatture.c
main.o: main.c fatture.h
	gcc -c -g main.c