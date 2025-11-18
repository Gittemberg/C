#include <stdio.h>

typedef struct
{
    int giorno;
    int mese;
    int anno;
} Data;

typedef struct
{
    char nome[20];
    Data nascita;

} Persona;

int main()
{
    Data oggi;
    Persona persona;
    printf("inserisci la data di oggi\n");
    scanf("%d%d%d", &oggi.giorno, &oggi.mese, &oggi.anno);
    printf("inserisci nome e data di nascita\n");
    scanf("%s%d%d%d", persona.nome, &persona.nascita.giorno, &persona.nascita.mese, &persona.nascita.anno);
    if (oggi.giorno == persona.nascita.giorno && oggi.mese == persona.nascita.mese)
    {
        printf("buon compleanno %s!\n", persona.nome);
    }
}