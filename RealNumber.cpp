#include <iostream>
#include "RealNumber.h"

using namespace std;

RealNumber::RealNumber(string a)
{
	number=a;
	separate();
}

RealNumber::~RealNumber()
{

}

void RealNumber::display()
{
	cout<<partInt<<","<<partFract<<endl;
}

void RealNumber::separate()
{
	unsigned int i=0;
	while(number[i]!='.')
		partInt+=number[i++];
		
	i++;
		
	while(i<number.length())
		partFract+=number[i++];
}
void RealNumber::alignNumbers(RealNumber n)
{
	if(n.partInt.length()>partInt.length())
	{
		string h="";
		for(int i=0;i<n.partInt.length()-partInt.length();i++)
			h+="0";
			
		h+=partInt;
		partInt=h;
		//display();
	}
	else if(n.partFract.length()>partFract.length())
	{
		string h="";
		for(int i=0;i<n.partFract.length()-partFract.length();i++)
			h+="0";
			
		partFract+=h;
		//display();
	}
}


