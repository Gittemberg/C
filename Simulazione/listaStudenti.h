typedef struct
{
    int matricola;
    char esame[40];
    int giorno;
    int mese;
    int anno;
    int voto;
} Record;
typedef struct
{
    int matricola;
    int n_esami;
    int somma_voto;
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