#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<6;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
