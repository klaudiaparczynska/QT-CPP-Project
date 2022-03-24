#ifndef ZLAB06_H
#define ZLAB06_H
#include "zlab03.h"
#include<iostream>

class Obliczenia {
protected:
const double pi = 3.14;
public:
virtual double promienKolaWgPola()=0 ;
virtual double promenOkreguWgObwodu()=0 ;
virtual ~Obliczenia();
};

class Kwadrat: public Prostokat, public Obliczenia
{
public:
  Kwadrat(string nazwa = "?", double bok=0):Prostokat(nazwa,bok,bok){}

  virtual  ~Kwadrat()
    {cout<<"Kwadrat: "<<nazwa
        <<" konczy dzialanie"<<endl;}
  double promienKolaWgPola() ;
  double promenOkreguWgObwodu() ;
  virtual  string doTekstu();
};
#endif // ZLAB06_H
