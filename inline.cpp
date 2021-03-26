#include <iostream>
using namespace std;
// demonstration of inline functions
class myclass {
	int a, b;
public:
	void init(int i, int j);
	// automatic inline
	void show(){
	cout << a << " " << b << "\n";
	}
};
// Create an inline function.
	inline void myclass::init(int i, int j)
	{
	a = i;
	b = j;
	}

int main()
{
	myclass x;
	x.init(10, 20);
	x.show();
return 0;
}
