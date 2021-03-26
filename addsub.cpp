#include <iostream>
using namespace std;

int add(int x, int y);
int sub(int x, int y);
 int main()
{
 int x;
 int y;
cout<<" please enter two number "<<endl;
  cin>> x >> y ;

int sum = add(x,y);
cout<<" the sum of "<< x<<" and "<< y <<" is: "<< sum <<endl;

int diff =sub(x,y); 
cout<<" the sub of "<<x <<" and "<< y <<" is: "<< diff <<endl;

return 0;
}
 int sum( int x ,int y)
{
 return(x+y);
}

int diff( int x , int y)
{
 return(x-y);
}



