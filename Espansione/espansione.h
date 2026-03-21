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
int confrontaMintermine(const char *a, const char *b, char *out);
void espandiMintermini(ListaMinterm *input, ListaMinterm *output);
