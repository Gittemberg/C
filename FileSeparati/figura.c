#include "headerFigura.h"

Figura quadrato(float lato)
{
    Figura f;
    f.tipo = Quadrato;
    f.dati.datiQuadrato.lato = lato;
    return f;
}
Figura rettangolo(float a, float b)
{
    Figura f;
    f.tipo = Rettangolo;
    f.dati.datiRettangolo.altezza = a;
    f.dati.datiRettangolo.base = b;
    return f;
}
float area(Figura f)
{
    switch (f.tipo)
    {
    case Quadrato:
        return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
    case Rettangolo:
        return (f.dati.datiRettangolo.altezza * f.dati.datiRettangolo.base) / 2;
    }
}
float perimetro(Figura f)
{
    switch (f.tipo)
    {
    case Quadrato:
        return 4 * f.dati.datiQuadrato.lato;
    case Rettangolo:
        return 2 * (f.dati.datiRettangolo.altezza + f.dati.datiRettangolo.base);
    }
}