#include<iostream>
#include "fraction.h"
using namespace std;

int main()
{
   Fraction a(2);  // constructor with one parameter is invoked e.g. for int x; 
   Fraction b(1,4);  // 2
   Fraction c;     // constructor with no parameter is invoked
   Fraction d(b);  // copy constructor is invoked, create an object d which should be having same state as that of object b
    
    c.show();  // 0/1
    // 2/1 dot operator or we call it as membership operator
    c.store(3,6); 
    c.show(); // 1/2
    b.show();      // 1/4

    b.store(6,12); // store function recieves address of object b, this = &b 
    cout<<"After normalization"<<endl;
    b.show();      //1/2 how function knows that on which fraction to operate???
    d.show();  // sleeping, who woke me up--this object--> address of object that invoked the function, and this address is stored in an 
              // implicit pointer known by the name *this pointer*/
   cout<<"Before addtion\n";
    a.show();
    b.show();  
    b.sum(1);  // sum function is called, b = b + a 1/2 + 3/4 = 1*4 +3*2
    cout<<"after addtion\n";
    b.show();
    cout<<"Differnce of ";
    b.show();
    cout<<" - ";
    a.show();
    b.Difference(a);
    
    cout<<" is ";
    b.show();
    cout<<"Product of ";
    c.show();
    cout<<" * ";
    d.show();
    c.Product(d);
    
    cout<<" is ";
    c.show();
/*Fraction f1(1,4);
Fraction f2(2,3);    
Fraction fAdd=f1+f2;
Fraction fSubtract=f1-f2;
Fraction fMultiply=f1*f2;
Fraction fDivide=f1/f2;
fAdd.show();
fSubtract.show();
fMultiply.show();
fDivide.show();*/
//cout << "Total fractions created = " << Fraction :: objectCount << endl;
    return 0;
}

// there is a special name that is given to variables of the type class === object of the class
// functions of a class can be called only by the objects of the class using .(dot) operator
