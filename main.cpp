#include <iostream>
#include "RealNumber.h"
using namespace std;

int main()
{
	RealNumber n("929.34");
	RealNumber m("4.812");
	//n.alignNumbers(m);
	//m.alignNumbers(n);
	m.display();
	n.display();
	cout<<endl;
	//m.add(n).display();
	m.multiply(n).display();
}
