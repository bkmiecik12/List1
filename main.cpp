#include <iostream>
#include "RealNumber.h"
using namespace std;

int main()
{
    RealNumber n("129.34");
    RealNumber m("9.812");
		n.alignNumbers(m);
		m.alignNumbers(n);
    n.display();
    m.display();
}
