#include <iostream>
#include <cstdlib>
using namespace std;
void function(int* x, int* y)
{
	//int c=*x;
	*x=*x+*y;
	*y= *x-*y;
	*y= *x-*y;
	*y= (*x-*y-*y);
}

int main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	function(&a,&b);
	cout<<"Sum="<<a<<"\tDifference="<<b;
	return 0;
}
