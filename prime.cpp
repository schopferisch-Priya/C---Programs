#include<iostream>
using namespace std;
int main()
{
	// Check whether a number is prime or not.
	
		int n,k,i,count;
	cout<<"Enter the number:";
	cin>>n;
	
	if (n==1)
	{
		cout<<"1 is neither prime nor composite.";
	}
	else
	{
		count=0;
	    for(i=2;i<n;i++)
	    {
		   if (n/i !=0 )
		   count++;
	    }
	    if(count==0)
	    {
	    	cout<<"\n"<<n<<"is prime.";
	    }
	    else
	    {
	    	cout<<"\nGiven number is composite.";
		}
	}
	return 0;
}

