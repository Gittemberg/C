typedef struct
{
    char targa[8];
    float durata;
    // int contatore;

} Sosta;
typedef struct
{
    char targa[8];
    int contatore;

} Accessi;

void caricaLista(void);
void stampaFattura(Accessi accessi[], int dl);
void scriviUltimi(Sosta soste[], int dl);