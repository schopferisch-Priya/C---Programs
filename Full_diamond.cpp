 #include<iostream>
using namespace std;
int main()
{
	// ************ FULL  DIAMOND ****************
	int i,j,k,n;
	cout<<"Enter no. of rows:";
	cin>>n;
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		cout<<" ";
		for(k=1;k<=(2*i-1);k++)
		cout<<"*";
		cout<<endl;
	}
	for(i=n-1;i>0;i--)
	{
		for(j=n-i;j>0;j--)
		cout<<" ";
		for(k=(2*i-1);k>0;k--)
		cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
