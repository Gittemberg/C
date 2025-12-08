#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int chip;
    char vaccino;

} Vaccinazione;

typedef struct
{
    int chip;
    int vaccinoE;
    int vaccinoC;
    int vaccinoP;

} VaccinazioneCheck;

void leggiFile(char nome[]);
void checkVaccinazioni(Vaccinazione vaccinazioni[], int);