#include<iostream>
using namespace std;

int main()
{
	int m,n,o,p,i,j,k;
	cout<<"Enter no. of rows in 1st array:";
	cin>>m;
	cout<<"Enter no. of coloumns in 1st array:";
	cin>>n;
	cout<<"Enter no. of rows in 2nd array:";
	cin>>o;
	cout<<"Enter no. of coloumns in 2nd array:";
	cin>>p;
	
	if(n!=o)
	{
		cout<<"We cant perform multiplication";
		return 0;
	}
	int a[m][n];
	int b[n][p];
	int M[m][p];
/*	cout<<"Enter no. of rows:";
	cin>>r;
	cout<<"Enter no. of coloumns:";
	cin>>c;
*/
	//Making 1st array
	cout<<"\n Enter elements of 1st array:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}

	//Making 2nd array
	cout<<"\n Enter elements of 2nd array:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<"b["<<i<<"]["<<j<<"]=";
			cin>>b[i][j];
		}
	}
	
	//Representing the matrices
	cout<<"\n\n Array1\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\n\n Array2\n ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\n\n **************Multiplication of Given 2 matrices******************\n";
    for( i=0;i<m;i++)
    {
    	for( j=0;j<p;j++)
    	{
    		//int sum=0;
    		M[i][j] = 0;
    		for( k=0;k<n;k++)
    		{
    			M[i][j]=M[i][j]+(a[i][k]*b[k][j]);
			}	
    		cout<<M[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
