#include<iostream>
#include<stdlib.h>
using namespace std;
// member functions that require one object to be passed as parameter, they are passed 0 parameters bcoz they already have address of 
//object in this pointer f1.show() this = &f1
//member functions that require two object to be passed as parameters, f1.sum(otherFraction)---this = &f1
class Fraction
{
private:
    int numerator, denominator; // data members
public:
    Fraction();  // parameterless constructor, it will have same name as the name of the class 1
    Fraction(int n);   // constructor with one parameter 2
    Fraction(int n, int d); // constructor with 2 parameters 3 function overloading
    Fraction(const Fraction& c); // copy constructor
    void store(int n, int d);
    void show() const; // how does show function know that what to 
    //void sum(Fraction &otherFraction);// function sum returns nothing, it adds otherfraction to the fraction that invokes it.
    void sum(int x);
    // x+ = y; f1+ = otherfraction ---> f1 = f1 + otherFraction, 
    void Difference(Fraction &otherFraction);
    void Product(Fraction &otherFraction);
    void Division(Fraction &otherFraction); 
    int gcd(int n, int d);
    /*Fraction operator+(Fraction f);
    Fraction operator-(Fraction f);
    Fraction operator*(Fraction f);
    Fraction operator/(Fraction f);
    friend Fraction operator +(const Fraction &frac1, const Fraction &frac2);
    static int objectCount;*/
   };

 Fraction :: Fraction()
    {
        numerator = 0;
        denominator = 1;
      //  objectCount++;
    }
 Fraction ::  Fraction(int n, int d)
    {
    
        if (d==0) 
        {
            cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
            exit(0); // will terminate the program if division by 0 is attempted
        }
     if(d<0)
        {
         n = -n;
         d = -d;
         }
        int g = gcd(n,d);  // 6, 8, g = 2
        n = n/g; // n = 6/2=3
        d = d/g;  // d = 8/2=4
        numerator = n;
        denominator = d;
    }
  Fraction :: Fraction(int n)
    {
        this->numerator = n;
        this->denominator = 1;
    }
Fraction :: Fraction(const Fraction& c)// c will recieve reference of b which means c and b are two names for same memory location
{
  numerator = c.numerator;  // d.numerator = b.numerator 
  denominator = c.denominator;
}
void Fraction :: store(int n, int d) // 3, 6
{
        numerator = n; // 3
        denominator = d;  //6
        *this = Fraction(numerator,denominator); // object with no name, temporary object, value at *(adress stored in this) =
}

void Fraction :: show() const // Display method
    {
        
            cout << numerator << "/" << denominator << endl;
    }

 int Fraction :: gcd(int n1, int n2)// n=3 d=5
    {
       int gcd;
       for(int i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
   return gcd;
    }
       
    
    /*void Fraction :: sum(Fraction &otherFraction) // 1/2 + 3/4f.sum(otherFraction),   f = f + otherFraction
    {
        numerator = numerator * otherFraction.denominator + otherFraction.numerator*denominator;
        denominator = denominator*otherFraction.denominator;
        *this = Fraction(numerator,denominator);
        return;
    }*/

    void Fraction :: sum(int x) // 1/2 + 3/4f.sum(otherFraction),   f = f + otherFraction
    {
        numerator = denominator * x + numerator;
        denominator = denominator;
        *this = Fraction(numerator,denominator);
        return;
    }
    void Fraction :: Difference(Fraction &otherFraction)
    {
        numerator  = numerator*otherFraction.denominator-otherFraction.numerator*denominator;
        denominator = denominator*otherFraction.denominator;
        return;
    }
    void Fraction :: Product(Fraction &otherFraction)
    {
        numerator  = numerator*otherFraction.numerator;
        denominator = denominator*otherFraction.denominator;
        cout<<numerator<<"/"<<denominator;
        return;
    }
    void Fraction :: Division(Fraction &otherFraction)
    {
        numerator  = numerator*otherFraction.denominator;
        denominator = denominator*otherFraction.numerator;
        return;
    } 
    //overloading the operator +
 /* Fraction Fraction :: operator+(Fraction f){
  Fraction r;
  r.numerator=(numerator*f.denominator)+(denominator*f.numerator);
  r.denominator=denominator*f.denominator;
  return(r);
}
 //overloading the operator -
Fraction Fraction :: operator-(Fraction f){
  Fraction r;
  r.numerator=(numerator*f.denominator)-(denominator*f.numerator);
  r.denominator=denominator*f.denominator;
  return(r);
}

//overloading the operator *
Fraction Fraction :: operator*(Fraction f){
  Fraction r;
  r.numerator=numerator*f.numerator;
  r.denominator=denominator*f.denominator;
return(r);
}

//overloading the operator /
Fraction Fraction :: operator/(Fraction f){
  Fraction r;
  r.numerator=numerator*f.denominator;
  r.denominator=denominator*f.numerator;
  return(r);
}
// defining friend function    
Fraction operator +(const Fraction &frac1, const Fraction &frac2) {
      int newnum = frac1.numerator * frac2.denominator + frac1.denominator * frac2.numerator;
      int newden = frac1.denominator * frac2.denominator;
      return Fraction(newnum, newden);
}
int Fraction :: objectCount = 0;  */ 
    
    
    
    
    
    
