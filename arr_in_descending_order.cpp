#include<iostream>
using namespace std;
int main()
{
	int x,i,j,c;
	cout<<"Enter no. of elements in array:";
	cin>>x;
	int a[x];
	for(i=0;i<x;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		if(i!=0)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]<a[i])
				{
					c=a[j];
					a[j]=a[i];
					a[i]=c;
				}
			}
		}
	/*	for(int y=0;y<=i;y++)
	    {
		    cout<<a[y]<<"\t";
	    }
	    cout<<endl;*/
	}
	
	cout<<"a["<<x<<"] is in descending order:\n";
	for(i=0;i<x;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	return 0;
	
}
