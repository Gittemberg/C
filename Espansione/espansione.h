#define MAX_TERMS 100
#define MAX_BITS 4

// Array di mintermini come stringhe
typedef struct
{
    char minterms[MAX_TERMS][MAX_BITS + 1]; // stringhe dei mintermini
    int count;                              // numero di mintermini
} ListaMinterm;

// Funzioni
void nuovaLista(ListaMinterm *l);
int inserisciMintermine(ListaMinterm *l, const char *minterm);
char *confrontaMintermine(char *minterm1, char *minterm2);
void confrontaArray(ListaMinterm *arrayOriginale, ListaMinterm *arrayNuovo);
