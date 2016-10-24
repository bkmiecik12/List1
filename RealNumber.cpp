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
void RealNumber::alignNumbers(RealNumber& n)
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
	else if(partInt.length()>n.partInt.length())
	{
		string h="";
		for(int i=0;i<partInt.length()-n.partInt.length();i++)
			h+="0";
			
		h+=n.partInt;
		n.partInt=h;
		//display();
	}
	else if(partFract.length()>n.partFract.length())
	{
		string h="";
		for(int i=0;i<partFract.length()-n.partFract.length();i++)
			h+="0";
			
		n.partFract+=h;
		//display();
	}
}
RealNumber RealNumber::add(RealNumber& n)
{
	//n.alignNumbers(this);
	alignNumbers(n);
	display();
	n.display();
	RealNumber x;
	char pom1='0',pom2='0';
	string res="0.0";
	int help;
	cout<<"bangla"<<endl;
	for(int i=partFract.length()-1;i>=0;i--)
	{
		pom2=pom1+partFract[i]+(n.partFract[i]-'0');
		cout<<pom2<<" ";
		if(pom2>58)
		{
			help=pom2-48;
			pom1=help/10+48;
			res+=pom2-10;
		}
		else res+=pom2;
		
		cout<<res<<endl;
	}
	x=res;
	return x;
}




















