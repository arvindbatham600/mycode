#include<iostream>
#include "fraction.h"
using namespace std;

int main()
{
    Fraction a(2);  
    Fraction b(1,4);  
    Fraction c;     
    
    c.show();  
    a.show();   
    c.store(3,6); 
    c.show(); 
    b.show();     

    b.store(1,6);  
    b.show();      

   
    return 0;
}