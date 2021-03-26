#include <iostream>
using namespace std;
class triangle
{
private:
 float ar;
 float a, b;
public:
 float getdata();
 float area();
 void print();
	
};

float triangle :: getdata(){

 	cout << " pls enter the length of the triangle " << endl;
	cin >> a;

	cout << " pls enter the base of the  triangle " << endl;
	cin >> b; 
 
	return 0;
}

float triangle :: area(){
 
 ar = 0.5 * a * b;
 return ar;
}

void triangle :: print(){
cout << " the area is : " << ar << endl;
}
int main(){

	triangle T;

	T.getdata();
	T.area();
	T.print();

	
return 0;
}