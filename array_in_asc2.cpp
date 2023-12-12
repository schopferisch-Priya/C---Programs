#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
    cout<<"Enter no. of rows:";
    cin>>r;
    int  arr[r];
    //input or array
    for(i=0;i<r;i++)
    {
    		cout<<"arr["<<i<<"]=";
    	cin>>arr[i];
	}
	//showing output
	cout<<"arr["<<r<<"]={";
	for(i=0;i<r;i++)
	{
		cout<<arr[i];
		if(i!=r-1)
		cout<<",";
	}
	cout<<"}\n\n";
	//arranging in ascending order
	cout<<"Array in ascending order:\n";
	cout<<"arr["<<r<<"]={";
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<r;j++)
		{
			if(arr[i]>arr[j])
			{
				int c=arr[j];
				arr[j]=arr[i];
				arr[i]=c;
			}
		}
	   	cout<<arr[i];
		if(i!=r-1)
		cout<<",";
		//cout<<arr[i]<<"\t";
	}
	cout<<"}";
	return 0;
}
