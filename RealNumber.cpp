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
	int c=max(partInt.length(),n.partInt.length());
	int m=max(partFract.length(),n.partFract.length());
	alignNumbers1(c,m);
	n.alignNumbers1(c,m);
}
void RealNumber::alignNumbers1(int c,int m)
{
	if(partInt.length()<c)
	{
		string h="";
		for(int i=0;i<c-partInt.length();i++)
			h+="0";
			
		h+=partInt;
		partInt=h;
		//display();
	}
	
	else if(partFract.length()<m)
	{
		string h="";
		for(int i=0;i<c-partFract.length();i++)
			h+="0";
			
		partFract+=h;
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
	string res="";
	int help;
	//cout<<"bangla"<<endl;
	for(int i=partFract.length()-1;i>=0;i--)
	{
		pom2=pom1-'0'+partFract[i]+(n.partFract[i]-'0');
		pom1='0';
		//cout<<pom2<<" ";
		if(pom2>57)
		{
			help=pom2-48;
			pom1=help/10+48;
			pom2-=10;
			//cout<<help<<"  "<<pom1<<endl;
		}
		res=pom2+res;
		
		//cout<<res<<endl;
	}
	x.partFract=res;
	res="";
	for(int i=partInt.length()-1;i>=0;i--)
	{
		pom2=pom1-'0'+partInt[i]+(n.partInt[i]-'0');
		pom1='0';
		//cout<<pom2<<" ";
		if(pom2>57)
		{
			help=pom2-48;
			pom1=help/10+48;
			pom2-=10;
			//cout<<help<<"  "<<pom1<<endl;
		}
		res=pom2+res;
		
		//cout<<res<<endl;
	}
	x.partInt=res;
	return x;
}




















