#ifndef ZLAB03_H
#define ZLAB03_H

#include <string>
#include <iostream>
using namespace std;

class Prostokat
{
protected:
    string nazwa;
    double bok1, bok2;
    bool poprawny;
    double obwod, pole;

    bool czyPoprawny(double bok1, double bok2);
    void obliczObwod();
    void obliczPole();

public:
    Prostokat(string n = "?", double a=1, double b=2);
    Prostokat & operator++(int);
    bool operator!(){return czyPoprawny();}
    virtual ~Prostokat();
    bool czyPoprawny();
    const string& jakaNazwa();
    double podajPole();
    double podajObwod();
    bool zmienBoki(double a, double b);

    virtual   std::string doTekstu();
};
std::ostream& operator<<(std::ostream & strumien, Prostokat & prostokat);
std::istream& operator>>(std::istream & strumien,Prostokat & prostokat);

/*cout << "LAb 02" << endl;

 Zlab02 lab02;
 lab02.menu();
 cout<< "Laoratorium 03" <<endl;

 Prostokat p1;
 Prostokat p2("koc",1.4,2.2);
 Prostokat p3("pulapka",-2,-3);

 cout.precision(2);
 cout << p1.doTekstu() <<endl;
 cout << p2.doTekstu() <<endl;
 cout << p3.doTekstu() <<endl;

 p3.zmienBoki(2,3);
 cout <<endl <<p3.doTekstu() <<endl;

 cout <<endl << "uzycie metod obiektu:"<<    endl;
 cout << "nazwa: "<< p2.jakaNazwa() <<   endl
      << "Poprawny: "<<p2.czyPoprawny() <<   endl
      << "Obwod=: "<<p2.podajObwod()<<   endl
      << "Pole "<< p2.podajPole()<<  endl;
      */
#endif // ZLAB03_H
