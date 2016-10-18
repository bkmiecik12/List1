#include <iostream>
#include "RealNumber.h"

using namespace std;

RealNumber::RealNumber(string a)
{
	liczba=a;
	separate();
}

RealNumber::~RealNumber()
{

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

