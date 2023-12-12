#include<iostream>
using namespace std;
int main()
{
	//int a;
	//cin>>a;
	//cout<<"The value of a is "<<a;
	
	/*
	int a;
	cin>>a;
	if(a>0){
		cout<<" a is positive.";
	}
	else{
		cout<<"a is negative.";
	}
	*/
	
	/*
	int a,b;
	cin>> a >> b;
	cout<<a <<endl << b;
	*/
	
	/*
	int a =cin.get();					// a=1;		here, a is character
	cout<<"Value of a is "<< a;			//ASCII value of a = 49
	*/
	
	/*        USE OF IF STATEMENT
	int a=9;
	if(a==9)
	{
		cout<<"NINEY"<<endl;
	}
	if(a>0)
	{
		cout<<"POSITIVE"<<endl;
	}
	else
	{
		cout<<"NEGATIVE"<<endl;
	}
	*/
	
	/*        USE OF IF-ELSE STATEMENT
	int a=2;
	int b=a+1;
	if((a=3)==b)
	{
		cout<<a;
	}
	else
	{
		cout<<a+1;
	}
	*/
	
	/*
	int a=24;
	if(a>20)
	{
		cout<<"Love"<<endl;		//Love
	}
	else if(a==24)
	{
		cout<<"Lovely"<<endl;		
	}
	else
	{
		cout<<"Babbar";
	}
	cout<<a;
	*/				//24
	
	/*
	char a;
	cin>>a;
	if(a>=97 && a<=122)
	{
		cout<<a<<" is Lowercase."<<endl;
	} 
	else if(a>=65 && a<=90)
	{
		cout<<a<<" is Uppercase."<<endl;
	}
	else
	{
		cout<<a<<" is Numeric."<<endl;
	}
	*/
	
	
	/*      USE OF WHILE LOOP
	int n;
	cin>> n;
	int i=1, sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"Sum = "<< sum;
	*/
	
	/*
	int n;
	cin>> n;
	int i=2, sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	cout<<"Sum = "<< sum;
	*/
	
	/*
	int F;
	cin>>F;
	int C = (F-32)*5/9;
	cout<<F <<"F = "<< C<<"C";
	*/
	
	//      PRIME NUMBER CHECKER
	int n;
	cin>>n;
	int i=2;
	while(i<n)
	{	
		if(n%i == 0)
		{
			cout<<n <<" is not prime.";
			break;
		}
		i=i+1;
	}
	if(i==n)
	{
		cout<<n <<" is Prime.";
	}
	
	return 0;
}
