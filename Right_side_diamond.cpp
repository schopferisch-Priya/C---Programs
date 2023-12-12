#include<iostream>
using namespace std;
int main()
{
	//************RIGHT  SIDE  DIAMOND*************
	int num,i,j;
	cout<<"Enter the number:";
	cin>>num;
	cout<<endl;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=num-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
    return 0;	
}
