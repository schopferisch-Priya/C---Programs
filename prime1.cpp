#include<iostream>
using namespace std;
int main()
{
	// Check whether a number is prime or not.
	
		int n,k,i,count;
	cout<<"Enter the number:";
	cin>>n;
	/*if (n==1)
	{
		cout<<"1 is neither prime nor composite.";
	}
	else*/
	{
		for(k=2;k<=n;k++)
		count=0;
		{
	    	for(i=1;i<=k;i++)
	        {
		       if (k/i !=0 )
		       count++;
	        }
	        if(count==2)
	        {
	        	//cout<<"\n"<<n<<"is prime.";
	        	cout<<"\n"<<k;
	        }
	        /*else
	        {
	    	   cout<<"\nGiven number is composite.";
		    }*/	
		}
	   
	}
	return 0;
}

