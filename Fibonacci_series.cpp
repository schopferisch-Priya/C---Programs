#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"Enter number of terms in fibonacci series:";
	cin>>n;
	
	if(n==1)
	{
		cout<<"\nFibonacci Series(1):0";
	}
	else if(n==2)
	{
		cout<<"\nFibonacci Series(2):0,1";
	}
	else
	{
	    a=0;
		b=1;
		cout<<"\nFibonacci Series("<<n<<"):0,1";
		for(int i=3;i<=n;i++)
		{
			/*int c=a+b;
			a=b;
			b=c;
			cout<<","<<c;*/
			b=a+b;
			a=b-a; 
			cout<<","<<b; 
	    }
	}

}
