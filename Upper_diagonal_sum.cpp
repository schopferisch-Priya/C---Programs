#include<iostream>
using namespace std;
int main()
{
	int r,c,n,i,j,sum;
	cout<<"Enter no. of rows:";
	cin>>r;
	cout<<"Enter no. of columns:";
	cin>>c;
	if(r!=c)
	{
		cout<<"We can't perform addition of upper diagonals.";
		return 0;
	}
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}	
	}
	
	cout<<"\n\nSquare Matrix Represented:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	sum=0;
	for(i=0;i<r;i++)
	{
		for(j=i;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}
	
	cout<<"Sum="<<sum;
	
	return 0;
}
