#ifndef Zadanie
#define Zadanie
#include <string>
#include <iostream>
#include <windows.h>


class MySin{ //klasa "MySin"

public: //metody publiczne
    MySin(); //metoda MySin
    MySin(double x); //metoda MySin(double x)
	MySin(const MySin &obj); // metoda MySin(const MySin &obj)
    ~MySin(); //metoda ~MySin()
	double value(); //metoda double value()
    void setX(double); //void setX(double)
	double getX(); //metoda double getX()

private:double mX(); // prywatna metoda

};



#endif