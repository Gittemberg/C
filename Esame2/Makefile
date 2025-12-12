vaccinazioni: main.o vaccini.o
	gcc -g -o vaccinazioni main.o vaccini.o

main.o: main.c vaccini.h
	gcc -g -c main.c
	
vaccini.o: vaccini.c vaccini.h
	gcc -g -c vaccini.c