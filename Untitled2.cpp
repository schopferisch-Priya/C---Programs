#include<iostream>
using namespace std;
int main()
{
	int num, i, j;
	cin>>num;
	cout<<"Increasing pattern:"<<endl;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
	cout<<endl;	
	}
	return 0;
}
