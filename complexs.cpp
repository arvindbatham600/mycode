#include <iostream>
#include "complexs.h"
using namespace std;

int main()
{
	complex a;
	complex b(5);
	complex c(2,3);
	complex d(b);
    cout << " the number of constructer are : " << complex :: count << endl;

    cout << " a complex number is :  ";
	a.print();
	cout << endl;

	cout << " b complex number is :  ";
	b.print();
	cout << endl;

	cout << " c complex number is :  ";
	c.print();
	cout << endl;

	cout << " now u  have seen the complex number of c " << endl;
    cout << " now i m going to change the value of c " << endl;
    c.set(7,8);
    c.print();
    cout << " now i m going to print copy constructer  " <<endl;
    d.print();
   
    cout << " now i m going to add two complex " << endl;
    b.add(c);
    b.print();
    cout << " now i m going to add  complex and float " << endl;
    b.add(1.2);
    b.print();

    cout << " now i m going to subtract two complex " << endl;
    b.sub(c);
    b.print();

    cout << " now i m going to multiply two complex " << endl;
    b.mul(c);
    b.print();

    cout << " now i m going to divide two complex " << endl;
    b.div(c);
    b.print();

    cout << " now i m adding float value with complex number " << endl;
    add(c, 1.25);
    c.print();


    cout << " now i m adding float value with complex number " << endl;
    add(1.25, c);
    c.print(); 

    complex x(2, 3);
    complex y(1, 3);
    complex m;
    complex n;
    complex o;
    complex p;
    

    m = x + y;
    cout << " the result of addition is : ";
    m.print();

    n = x - y;
    cout << " the result of subtraction is : ";
    n.print();

    o = x * y;
    cout << " the result of multiplication  is : ";
    o.print();

    p = x / y;
    cout << " the result of division is : ";
    p.print();


cout << " now we are going to perform prefix and postfix " <<endl;

 m++;// this is postfix
m.print();


++m;// this is prefix
m.print();

complex t;
t.print();
cout << t << endl;

cout << " pls enter the value of real and imaginary part " << endl;
cin >> t.real >> t.imaginary;

cout << t << endl;

complex i;

i = t;

cout << i << endl;



	return 0;
} 