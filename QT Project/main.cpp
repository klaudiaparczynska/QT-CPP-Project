#include <iostream>
#include "zlab02.h"
#include "zlab03.h"
#include "zlab06.h"
#include "zlab09.h"
#include "zlab10.h"
#include "organizm.h"
#include "ustawienia.h"
#include <clocale>
#include <time.h>
#include "sasiedztwo.h"
#include "nisza.h"
#include "osobniki.h"
#include "generatorlosowy.h"
using namespace std;

void drukujOrganizm(const Organizm & o)
{
    cout << "licznikZycia: "
        << o.stanLicznikaZycia()
        <<"  licznikPosilkow: "
        << o.stanLicznikaPosilkow() <<endl
        << "limitPosilkow: "
        << o.limitPosilkow
        <<" kosztPotomka: "
        << o.kosztPotomka <<endl
        << "glodny: " << o.glodny()
        <<" paczkujacy: "
        <<o.paczkujacy() <<endl <<endl;
}


void wyswietl(UstawieniaSymulacji & UST)
{
 cout << "Znak glon:" << UST.znakGlon
 << " zycieMin=" << UST.glonZycieMin
 << " zycieMax=" << UST.glonZycieMax << endl;
}


string nazwaRodzaju(RodzajMieszkanca rodzaj)
{
    switch (rodzaj) {
        case GLON: return "GLON";
        case GRZYB: return "GRZYB";
        case BAKTERIA: return "BAKTERIA";
        case PUSTKA: return "PUSTKA";
        case SCIANA: return "ŚCIANA";
        case TRUP: return "TRUP";
        case NIEZNANE: return "NIEZNANE";
    default: return "NIEZNANE";
    }
}

static std::minstd_rand device;
static Nisza n1, n2, n3;
static char sep = UstawieniaSymulacji::pobierzUstawienia().znakSeparator;

void wyswietlNisze()
{
    cout<< n1.jakiSymbol() << sep
        << n2.jakiSymbol() << sep
        << n3.jakiSymbol() <<endl;
}

int main()
{
//    ZLab10 cos;
//    cos.wektor();
//    cos.wektor_sortowanie();
//    cos.zbior();
//    cos.mapa();
//    Prostokat p("Prostokat",2,3);
//    cout << p << endl;
//    p++;
//    cout << p << endl;

    Srodowisko ekoSystem(8,12);
    ekoSystem.lokuj(new Glon(),0,10);
    ekoSystem.lokuj(new Glon(),1,10);
    ekoSystem.lokuj(new Glon(),1,13);
    ekoSystem.lokuj(new Glon(),3,10);
    ekoSystem.lokuj(new Grzyb(),1,11);
    ekoSystem.lokuj(new Grzyb(),0,0);
    ekoSystem.lokuj(new Bakteria(),3,3);
    ekoSystem.lokuj(new Bakteria(),2,6);

    unsigned long i = 0;

    do{
        system("cls");
        cout << "Krok symulacji: " << i << endl
             << endl << ekoSystem.doTekstu() << endl;

        cin.ignore(1);
        ekoSystem.wykonajKrokSymulacji();
        i++;
    } while(i < 200 && !ekoSystem.martwy());

    cout << endl;
    return 0;
}
