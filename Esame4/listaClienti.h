typedef struct
{
    char fiscale[17];
    int giorno;
    int mese;
    int anno;
    float importo;
} Record;

typedef struct
{
    char fiscale[17];
    float totale;
    float mensili[12];
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
void ordina(Lista pl, Lista *l2);
