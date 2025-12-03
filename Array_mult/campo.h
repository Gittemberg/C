
#define NRIGHE 4
#define NCOLONNE 6

typedef struct
{
    int mina;
    int coperta;
} Cella;
typedef struct
{
    Cella celle[NRIGHE][NCOLONNE];
} Campo;

void inizializza(Campo *pcampo, float probmina);
int mine_adiacenti(Campo pcampo, int r, int c);
void stampa(Campo pcampo);
