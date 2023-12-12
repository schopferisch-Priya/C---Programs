#include <iostream>
using namespace std;
#include<cmath>

int n;

int fib(int n)
{
	if(n==1)
	return 0;
	
	else if (n==2)
	return 1;
	
	else
	return fib(n-1)+fib(n-2);
}

int main()
{
//	float x= -748;
	cout<<"Enter number of terms in fibonacci series:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cout<<fib(i)<<"\t"; 
	}
//	cout<<fabs(x);
    return 0;
}
