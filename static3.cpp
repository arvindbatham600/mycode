#include <iostream>
using namespace std;
class shared {
public:
static int a;
} ;
int shared::a; // define a
int main()
{
// initialize a before creating any objects
shared::a = 99;
cout << "This is initial value of a: " << shared::a;

cout << "\n";
shared x;
x.a = 100;
cout << "This is x.a: " << x.a <<endl;
cout << "This is initial value of a: " << shared::a;
return 0;
}