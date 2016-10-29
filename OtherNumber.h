#include <iostream>
#include "RealNumber.h"

using namespace std;

class OtherNumber
{
	public:
	RealNumber number1; //
	
	OtherNumber(RealNumber);
	~OtherNumber();
	OtherNumber add1(OtherNumber&);//dodawanie
	OtherNumber multiply1(OtherNumber&);//mnozenie
	//void separate(); //kropka [.] oddziela
	void display1(); //wyswietl liczbe
	//void alignNumbers(RealNumber&); //wyrownanie dlugosci
	//void alignNumbers1(int,int);
	void reverse();
};
