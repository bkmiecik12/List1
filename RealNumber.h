#include <iostream>

using namespace std;

class RealNumber
{
	public:
	string number; //jaka jest kazdy widzi
	string sign; //znak
	string partInt; // czesc calkowita
	string partFract; //czesc ulamkowa
	
	
	RealNumber(string="0.0");
	~RealNumber();
	RealNumber add(RealNumber&);//dodawanie
	RealNumber multiply(RealNumber&);//mnozenie
	void separate(); //kropka [.] oddziela
	void display(); //wyswietl liczbe
	void alignNumbers(RealNumber&); //wyrownanie dlugosci
	void alignNumbers1(int,int);
};
