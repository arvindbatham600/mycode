#include <iostream>
using namespace std;

class MYCLASS
{
private:
	int x = 1;
	int y = 2;;
public:
	MYCLASS();
	MYCLASS(int a, int b);
	void print();
};
MYCLASS :: MYCLASS(int a, int b){
	
cout << " the value of a is : " << a << endl;
cout << " the valur of b is : " << b << endl; 
	 x = a;
	 y = b;
}

MYCLASS :: MYCLASS(){
	 x = 0;
	 y = 1;
}
void MYCLASS :: print(){
	cout << " the value of  x is : " << x << endl;
	cout << " the valure of y is : " << y << endl;
	return;
}

int main(){
	MYCLASS a(4, 5);
	a.print();

	MYCLASS b;
	b.print();


	return 0;
}