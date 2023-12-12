#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter no. of rows:";
	cin>>r;
	cout<<"Enter no. of coloumns:";
	cin>>c;
	int arr[r][c];
	int arrT[c][r];
	/*cout<<"Enter no. of rows:";
	cin>>r;
	cout<<"Enter no. of coloumns:";
	cin>>c;
	*/
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout<<"arr["<<i<<"]["<<j<<"]=";
    		cin>>arr[i][j];
		}
		cout<<endl;
	}
	cout<<"A "<<r<<"*"<<c<<" Matrix Represented:"<<endl;
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
        {
    		cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Transpose of matrix
	cout<<"\n\n Transpose of given matrix:\n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			arrT[i][j]=arr[j][i];
			cout<<arrT[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
