#include<iostream>
#include<stdlib.h>
using namespace std;
class Fraction
{
private:
    int numerator, denominator; // data members
public:
    Fraction();  // parameterless constructor, it will have same name as the name of the class 1
    Fraction(int n);   // constructor with one parameter 2
    Fraction(int n, int d); // constructor with 2 parameters 3 function overloading
    void store(int n, int d);
    void show();
   };

Fraction :: Fraction()
    {
        numerator = 0;
        denominator = 1;
    }
 Fraction ::  Fraction(int n, int d)
    {
    
        if (d==0) 
        {
            cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
            exit(0); // will terminate the program if division by 0 is attempted
        }
     
        numerator = n;
        denominator = d;
    }
  Fraction :: Fraction(int n)
    {
        numerator = n;
        denominator = 1;
    }

void Fraction :: store(int n, int d)
{
        numerator = n;
        denominator = d;
}

void Fraction :: show() // Display method
    {
        
            cout << numerator << "/" << denominator << endl;
    }
    
    
    
    
    