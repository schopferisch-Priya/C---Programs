#include<iostream>
using namespace std;
int count(int n)
{
	if(n>0)
	{
		n=n/10;
		return 1+count(n);
	}
	else
	return 0;
}

int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Number of digits in a number="<<count(num);
	return 0;
}
