progr: main.o frazione.o
	gcc -g -o  progr frazione.o main.o

frazione.o: frazione.h frazione.c
	gcc -g -c frazione.c

main.o: main.c frazione.h
	gcc -g -c main.c
