#include<iostream>
using namespace std;
int main()
{
	// ************HALF  DIAMOND****************
	int n,i,j,k;
	cout<<"Number of rows:";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=(2*(i-1))+1;k++)
        {
        	cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
