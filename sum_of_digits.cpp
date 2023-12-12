#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the number:";
	cin>>n;
	do{
		int r=n%10;
		sum=sum+r;
		n=n/10;
	}while(n>0);
	cout<<"\n Sum of digits of n numbers="<<sum;
	return 0;
}
