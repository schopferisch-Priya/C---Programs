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

int sum(int num)
{
	int sum;
	int i;
	for(i=1;i<=num;i++)
	{
		sum=i+sum;
	}
	return sum;
}

