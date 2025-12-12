typedef struct
{
    int chip;
    char vaccino;

} Record;

typedef struct
{
    int chip;
    int e;
    int p;
    int c;

} Dato;
typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void inserimento(Lista *pl, Record r);
void stampa(Lista pl);
void inserimentoOrdinato(Lista *pl, Dato d);