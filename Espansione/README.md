Espansione di Mintermini

Questo programma in C legge una tabella di verità da file e calcola una forma semplificata dei mintermini utilizzando un processo di espansione.

Il file deve contenere righe nel formato:

bitstring valore

Esempio:

0000 0
0001 1
0010 0
0011 0
0100 0
0101 0
0110 0
0111 0
1000 0
1001 1
1010 0
1011 1
1100 1
1101 1
1110 1
1111 1

Compila il programma con:
make 

Esecuzione:
./espansione tabella.txt

Per usare più di 4 bit bisogna modificare MAX_BITS in espansione.h tenendo conto di dover modificare anche MAX_TERMS se si va oltre 100 mintermini.

