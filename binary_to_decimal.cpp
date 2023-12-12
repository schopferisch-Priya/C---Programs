/*#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
using namespace std; 
int main()
{
	//Convert binary into decimal.
	
	string s;
	char s1;
	int i,sum;
	cout<<"Enter the binary number:";
	cin>>s;
	sum=0;
	for(i=s.length()-1;i>=0;i--)
	{
		/*cout<<"\n"<<i<<"\n";
		cout<<s.length()<<"\n";
		cout<<s.at(i)<<"\n";*/
		
	/*	s1=s.at(i);
		stringstream geek(s1);
		
		int x=0;
		geek>>x;
		
		sum=sum+(x*pow(s.length()-i-1,2));
		cout<<"\n"<<sum;
	}
	cout<<"\n"<<s<<"(in decimal form)="<<sum;
	return 0;
}*/
#include<iostream>
#include<string>
#include<math.h>
using namespace std; 
int main()
{
	//Convert binary into decimal.
	
	string s;
	char s1;
	int i,sum;
	cout<<"Enter the binary number:";
	cin>>s;
	sum=0;
	for(i=s.length()-1;i>=0;i--)
	{
		
		s1=s.at(i);
		int x=s1-48;
		sum=sum+(x*pow(2,s.length()-i-1));
		cout<<"\n"<<sum;
		cout<<"\n----------------";
	}
	cout<<"\n"<<s<<"(in decimal form)="<<sum;
	return 0;
}

