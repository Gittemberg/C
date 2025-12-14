typedef struct
{
    char targa[8];
    float durata;
} Record;
typedef struct
{
    char targa[8];
    int contatore;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void inserimento(Lista *pl, Record r);
void stampa(Lista l);
void inserimentoOrdinato(Lista *pl, Record r);
void insTesta(Lista *pl, Dato d);