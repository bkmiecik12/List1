#include <iostream>
#include "RealNumber.h"
using namespace std;

int main()
{
	RealNumber n("-18.342");
	RealNumber m("-349.01");
	//n.alignNumbers(m);
	//m.alignNumbers(n);
	m.display();
	n.display();
	//cout<<endl;
	m.add(n).display();
	m.multiply(n).display();
}
