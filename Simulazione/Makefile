medie: medie.o main.o
	gcc -o medie -g main.o medie.o
medie.o: medie.c medie.h
	gcc -g -c medie.c
main.o: main.c medie.h
	gcc -g -c main.c