#include <iostream>
//#include "RealNumber.h"
#include "OtherNumber.h"
using namespace std;

int main()
{
	RealNumber n("18.342");
	RealNumber m("349.01");
	cout<<endl;
	
	n.display();
	m.display();
	
	n.add(m).display();
	n.multiply(m).display();
	
	cout<<"---------"<<endl;
	
	OtherNumber x(n);
	OtherNumber y(m);
	
	x.display1();
	y.display1();
	
	OtherNumber xpy=x.add1(y);
	xpy.display1();
	
	OtherNumber xmy(n.multiply(m));
	xmy.display1();
	
	//x.display1();
	//n.alignNumbers(m);
	//m.alignNumbers(n);
	//m.display();
	//n.display();
	//cout<<endl;
	//m.add(n).display();
	//m.multiply(n).display();
}
