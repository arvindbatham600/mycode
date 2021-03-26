#include <iostream>
using namespace std;

class complex{

//private:


public:
	float real;
int imaginary;

 complex();
 complex(int a);
 complex(int a, int b);
 complex(const complex& c);

 void set(int a, int b);
 void print();
 void add(complex& d);
 void add(float c);
 void sub(complex& d);
 void mul(complex& d);
 void div(complex& d);
 static int count;
 ~complex(){
 	cout << " destroying complex " << endl;
 }

 
 friend void add(complex& d, float c);
 friend void add (float c, complex& d);
 friend ostream& operator<<(ostream& os, complex& c);
 friend istream& operator>>(istream& is, complex& c);
 complex operator+(complex c);
 complex operator-(complex c);
 complex operator*(complex c);
 complex operator/(complex c);
 complex operator++(){

	real = real + 1;
	imaginary = imaginary + 1;
	return *this;
}
 complex operator=(complex c){

	real = c.real;
	imaginary = c.imaginary;
	return *this;
}
 complex operator++(int){
	 complex temp(*this);
    ++*this;
	 return temp;
	}


};
 int complex :: count; // defining static

complex :: complex(){
	real = 0;
	imaginary = 1;
    count++;
    cout << " creating complex " << endl;
}

complex :: complex(int a){
	 real = a;
	 imaginary = 1;
	   count++;
    cout << " creating complex " << endl;
}

complex :: complex(int a, int b){
	real = a;
	imaginary = b;
	  count++;
    cout << " creating complex " << endl;
}

void complex :: set(int a, int b){
	real = a;
	imaginary = b;
}

void complex :: print()
{
	cout << real << "+" << imaginary << "i" <<endl;
}

complex :: complex(const complex& c){
	real = c.real;
	imaginary = c.imaginary;
	  count++;
    cout << " creating complex " << endl;
}

void complex :: add(float c){
	real = real + c;
	imaginary = imaginary;
}
void  complex :: add(complex& d){
	real = real + d.real;
	imaginary = imaginary + d.imaginary;
}
void add(complex& d, float c){
	d.real = c + d.real;
	d.imaginary = d.imaginary;
}

void add(float c,complex& d){
	d.real = c + d.real;
	d.imaginary = d.imaginary;
}


void complex :: sub(complex& d){
	real = real - d.real;
	imaginary = imaginary - d.imaginary;
}

void complex :: mul(complex& d){
	real = real * d.real;
	imaginary = imaginary * d.imaginary;
}

void complex :: div(complex& d){
	real = real / d.real;
	imaginary = imaginary / d.imaginary;
}	
complex complex :: operator+(complex c)
{
  complex r;
  r.real = real + c.real;
  r.imaginary = imaginary + c.imaginary;
  return(r);
}

complex complex :: operator-(complex c)
{
  complex r;
  r.real = real - c.real;
  r.imaginary = imaginary - c.imaginary;
  return(r);
}
complex complex :: operator*(complex c)
{
  complex r;
  r.real = real * c.real;
  r.imaginary = imaginary * c.imaginary;
  return(r);
}

complex complex :: operator/(complex c)
{
  complex r;
  r.real = real / c.real;
  r.imaginary = imaginary / c.imaginary;
  return(r);
}
ostream& operator<<(ostream& os, complex& c){

	os << c.real << '+' << c.imaginary << 'i' << endl;
	return os;
}

istream& operator>>(istream& is, complex& c){
	is >> c.real >> c.imaginary;
	return is;
}



