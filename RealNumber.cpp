#include <iostream>
#include <string>
#include "RealNumber.h"

using namespace std;

RealNumber::RealNumber(string a)
{
	liczba=a;
}

RealNumber::~RealNumber()
{
	cout<<"Destruktor działa";
}

void RealNumber::display()
{
	cout<<cecha<<","<<mantysa<<endl;
}

void RealNumber::separate()
{
	unsigned int i=0;
	while(liczba[i]!='.')
		cecha+=liczba[i++];
		
	i++;
		
	while(i<liczba.size())
		mantysa+=liczba[i++];
}
