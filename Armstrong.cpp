#include<iostream>
using namespace std;
int main()
{
	int n,R,sum,i ;
	cout<<"Enter the number:";
	cin>>n;
	sum=0;
	for(int i=n; i > 0; i=i/10)
	{
		R=i%10;
		sum=sum+R*R*R;
		//cout<<"R="<<R;
		//cout<<"sum="<<sum;

	}
	if (n==sum)
	{
		cout<<"\n Given number is armstrong number.";
	}
	else
	{
		cout<<"Given number is not armstrong number.";
	}
	return 0;
}
