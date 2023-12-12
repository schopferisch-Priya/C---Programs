#include<iostream>
using namespace std;

int sum(int n)
{
	if(n!=0)
	{
		int r=n%10;
		n=n/10;
		return r+sum(n);
	}
	else
	return 0;
}

int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"\n Sum of digits of n numbers="<<sum(num);
	return 0;
}
