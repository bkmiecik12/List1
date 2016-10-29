#include <iostream>
#include "OtherNumber.h"
//#include "RealNumber.h"

using namespace std;

OtherNumber::OtherNumber(RealNumber a)
{
	number1=a;
	reverse();
}

OtherNumber::~OtherNumber()
{
}

void OtherNumber::display1()
{
	number1.display();
}

void OtherNumber::reverse()
{
	string c=number1.sign;
	//cout<<c<<" ";
	for(int i=number1.partFract.length()-1;i>=0;i--)
	c+=number1.partFract[i];
	c+=".";
	for(int i=number1.partInt.length()-1;i>=0;i--)
	c+=number1.partInt[i];
	RealNumber r(c);
	number1=r;
}
OtherNumber OtherNumber::add1(OtherNumber& n)
{
	return OtherNumber(number1.add(n.number1));
}

OtherNumber OtherNumber::multiply1(OtherNumber& n)
{
	return OtherNumber(number1.multiply(n.number1));
}
