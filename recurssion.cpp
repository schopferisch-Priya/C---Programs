#include<iostream>
using namespace std;

int num;
int sum(int num);

int main()
{
	cout<<"Enter number of terms to sum:";
	cin>>num;
	cout<<"Sum of "<<num<<" numbers="<<sum(num);
	return 0;
}

int sum(int n)
{
	if(n>0)
	{
		if(n==1)
		return 1;
		else
		return n+sum(n-1); 
	}
}

