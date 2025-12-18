medie: listaStudenti.o main.o
	gcc -o medie -g main.o listaStudenti.o
listaStudenti.o: listaStudenti.c listaStudenti.h
	gcc -g -c listaStudenti.c
main.o: main.c listaStudenti.h
	gcc -g -c main.c