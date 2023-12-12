#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter no. of rows:";
	cin>>r;
	cout<<"Enter no. of coloumns:";
	cin>>c;
	int a1[r][c];
	int a2[r][c];
	int arr[r][c];
/*	cout<<"Enter no. of rows:";
	cin>>r;
	cout<<"Enter no. of coloumns:";
	cin>>c;
*/
	//Making 1st array
	cout<<"\n Enter elements of 1st array:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"a1["<<i<<"]["<<j<<"]=";
			cin>>a1[i][j];
		}
	}

	//Making 2nd array
	cout<<"\n Enter elements of 2nd array:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"a2["<<i<<"]["<<j<<"]=";
			cin>>a2[i][j];
		}
	}
	
	//Representing the matrices
	cout<<"\n\n Array1\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\n\n Array2\n ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a2[i][j]<<"\t";
		}
		cout<<endl;
	}
	//Performing addition of matrix
    cout<<"\n\n **************Addition of Given 2 matrices******************\n";
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		arr[i][j]=a1[i][j]+a2[i][j];
    		cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
    return 0;	
}
