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
	cout<<sign<<partInt<<","<<partFract<<endl;
}

void RealNumber::separate()
{
	unsigned int i=0;
	if(number[0]=='-')
	{
		sign='-';
		i++;
	}
	else sign="";
	
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
	
	if(partFract.length()<m)
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
	alignNumbers(n);
	//display();
	//n.display();
	RealNumber x;
	char pom1='0',pom2='0';
	string res="";
	int help;
	cout<<endl;
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
	if(pom1=='1')res=pom1+res;
	x.partInt=res;
	if(sign=="-" && n.sign=="-") x.sign="-";
	cout<<"DODAWANIE"<<endl;
	return x;
}
RealNumber RealNumber::multiply(RealNumber& n)
{
	alignNumbers(n);
	//display();
	//n.display();
	string s1=partInt+partFract;
	string s2=n.partInt+n.partFract;
	string res1="";
	string res2="";
	RealNumber x;
	cout<<endl;
	for(int i=s2.length()-1;i>=0;i--)
	{
		//cout<<"bangla\n";
		
		char pom1='0',pom2='0';
		int help;
		for(int j=s1.length()-1;j>=0;j--)		//DO POPRAWY!!!git
		{
			pom2=pom1+((s2[i]-'0')*(s1[j]-'0'));
			//cout<<pom2<<" ";
			pom1='0';
			if(pom2>48)
			{
				help=pom2-48;
				pom1=(help/10)+48;
				pom2=(help%10)+48;
				//cout<<help<<"  "<<pom1<<" "<<pom2<<"\n";
			}
			res1=pom2+res1;
			//cout<<res1<<" ";
		}
		
		//cout<<res1<<endl;
		if(pom1>48) res1=pom1+res1;
		
		for(int ii=i;ii<s2.length()-1;ii++)
			res1+='0';
		
		//cout<<res1<<" "<<res2<<endl;
		if(res2.length()>0)
		{
			string h="";
			for(int ii=res1.length()-res2.length();ii>0;ii--)
				h+='0';
			
			res2=h+res2;
			//cout<<res1.length()<<" "<<res2.length()<<" "<<res1<<" "<<res2<<endl;
			char pom12='0',pom22='0';
			string temp="";
			int help2;
			//cout<<"bangla"<<endl;
			for(int ii=res1.length()-1;ii>=0;ii--)
			{
				pom22=pom12-'0'+res1[ii]+(res2[ii]-'0');
				pom12='0';
				//cout<<pom2<<" ";
				if(pom22>57)
				{
					help2=pom22-48;
					pom12=help2/10+48;
					pom22-=10;
					//cout<<help<<"  "<<pom1<<endl;
				}
			temp=pom22+temp;
		
		//cout<<res<<endl;
			}
			res2=temp;
			if(pom12=='1')res2=pom12+res2;
		}//wyrownaj i dodaj res1+res2
		else res2=res1;
		//cout<<res2<<" "<<res1<<endl;
		
		
		res1="";
		
	}
	if((sign=="-" && n.sign=="")||(n.sign=="-" && sign=="")) x.sign="-";
	int countF=n.partFract.length()+partFract.length(),l=res2.length();
	int i=0;
	while(res2[i]=='0')i++;
	x.partInt=res2.substr(i,l-countF);
	i=res2.length()-1;
	
	while(res2[i]=='0')i--;
	
	x.partFract=res2.substr(l-countF);
	//cout<<x.partInt<<endl;
	cout<<"MNOŻENIE"<<endl;
	return x;
}





















