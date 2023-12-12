#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,ele;
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
	cout<<"\narr["<<r<<"]={";
	for(i=0;i<r;i++)
	{
		cout<<arr[i];
		if(i!=r-1)
		cout<<",";
	}
	cout<<"}\n\n";
	
	//searching elements
	cout<<"Search elements found in array or not:";
	cout<<"\n\nEnter the numbers:";
	cin>>ele;
	for(i=0;i<r;i++)
	{
		if(ele==arr[i])
		{
		    cout<<ele<<" is available in array.";
		    break;
	    }
		
	}
			 if(i==r)
		{
		   cout<<ele<<" is not available in array.";
	    }
	
	return 0;
}
