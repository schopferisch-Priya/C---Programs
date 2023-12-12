#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char name;
	char s[30];
	cout<<"Enter the name:";
	cin>>s;
	cout<<strlen(s);
//	char s[30];
	for(int i=0;i<=(strlen(s)/2-1);i++)
	{
		char c=s[i];
		s[i]=s[strlen(s)-1-i];
		s[strlen(s)-1-i]=c;
		//cout<<s[i];
	}
	
	cout<<"Reverse of the string:";
	
	for(int i=0;i<strlen(s);i++)
	{
		cout<<s[i]<<"\t";
	}
	return 0;
}
