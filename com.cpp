#include <iostream>
#include "complexs.h"
using namespace std;

int main()
{
	complex a;
	complex b(5);
	complex c(2,3);

cout << " now we are going to use  prefix and postfix " << endl;

++b;
b.print();

c++;
c.print();

return 0;
}