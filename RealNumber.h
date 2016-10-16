#include <iostream>

using namespace std;

class RealNumber
{
	string liczba; //jaka jest kazdy widzi
	string cecha; // czesc calkowita
	string mantysa; //czesc ulamkowa
	
	public:
	RealNumber(string="0.0");
	~RealNumber();
	//string add(string);
	//string multiply(string);
	void separate(); //kropka [.] oddziela
	void display();
};
