#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of coloumns:";
    cin>>c;
    int  arr[r][c];
    cout<<endl;
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout<<"arr["<<i<<"]["<<j<<"]=";
    		cin>>arr[i][j];
    	//	cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"A "<<r<<"*"<<c<<" Matrix Represented:"<<endl;
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		//cin>>arr[i][j];
    		cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
    return 0;
}
