#include<iostream>
using namespace std;
int main()
{
	int i,n,p;
	cin>>n;
    int arr[1000];
	int j=0;
	int count=0;
	for(i=n;i>0;i=i/2)
	{
		p=i%2;
		cout<<p<<endl;
		cout<<endl;
		
		arr[j++]=p;
	    count++;
	    
	   /* for(i=count-1;i>=0;i--)
    	{
	    	cout<<arr[i];
	    }*/
	}
    for(i=count-1;i>=0;i--)
   	{
	   	cout<<arr[i];
	}
	return 0;
}
