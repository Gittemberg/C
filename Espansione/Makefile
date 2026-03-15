espansione: main.o espansione.o
	gcc -g -o espansione main.o espansione.o -lm
main.o: main.c espansione.h
	gcc -c -g main.c 
espansione.o: espansione.c espansione.h
	gcc -c -g espansione.c