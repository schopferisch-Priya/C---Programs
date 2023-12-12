#include<iostream>
using namespace std;

class A
{
	int d,s,t;
		
	public:
		A()
		{
			t=10;
			s=10;
		}
		
		void display()
		{
			cout<<"Time="<<t;
			cout<<"\nSpeed="<<s;
		}
		
		A(int x, int y)
		{
			s=x;
			t=y;
		}
		
		inline void input();            // int a,int b
		
		friend int calc (A a);
};

void A :: input()
{
	cin>>s>>t;
}

int calc (A a)
{
	a.d=(a.s)*(a.t);
    return a.d;
}

int main()
{
	cout<<"\n***********Using Default Constructor**********\n";
	A a;
	a.display();
	cout<<"\nDistance="<<calc(a);
	
	cout<<"\n********Using Parameterised Constructor********\n";
	A a2(20,0);
	a2.display();
	cout<<"\nDistance="<<calc(a2);
	
	cout<<"\n***********Using Inline Function***************\n";
	A a3;
	cout<<"\n Enter the speed and time:";
	a3.input();
	a3.display();
    cout<<"\nDistance="<<calc(a3);
	
	return 0;
}
