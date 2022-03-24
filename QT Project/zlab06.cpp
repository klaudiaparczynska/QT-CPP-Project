#include "zlab06.h"
#include <cmath>
string Kwadrat::Kwadrat::doTekstu()
{
    string napis ="";
    napis = "Kwadrat o nazwie: " + nazwa
    + " bok=" + to_string(bok1);
    if(poprawny) napis += " obwod=" + to_string(obwod)
    + " pole=" + to_string(pole);
    else napis +=" !Figura niepoprawna.";
    return napis;
}

Obliczenia::~Obliczenia()
{}

double Kwadrat::promienKolaWgPola()
{
    return sqrt(pole / pi);
}

double Kwadrat::promenOkreguWgObwodu()
{
    return obwod / (2*pi);
}
