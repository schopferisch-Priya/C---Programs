#include <iostream>
using namespace std;

int revnum(int &x, int &y)
{
	while(x!=0)
	{
		int r;
		r=x%10;
		y=y*10+r;
		x=x/10;
	}
}

int main()
{
	int n,rev=0;
	cout<<"Enter the number:";
	cin>>n;
	revnum(n,rev);
	cout<<"Reverse of number:"<<rev;
	return 0;
}
