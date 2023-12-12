#include<iostream>
#include<string>
using namespace std;

int a()
{
	cout<<"a";
}
int main()
{
	string s;
	a();
	int i, count;
	
	cout<<"Enter the string:";
	cin>>s;
//	count=0;
/*	for(i=s.length()-1;i>=0;i--)
	{
		if(s.at(i)!=s.at(s.length()-1-i))
		count++;
		else
		cout<<"\n"<<s<<" is a palindrome string.";
	}
	if (count==0)
	{
		cout<<"\n"<<s<<" is a palindrome string.";
	}
	else
	{
		cout<<"\n"<<s<<" is not a palidrome string.";
	}*/
	int p=s.length()/2;
	for(i=0;i<s.length()/2;i++)
	{
		if(s.at(i)!=s.at(s.length()-1-i))
		break;
		
	//	else if(i==s.length())
    //	{
	  //  	cout<<"\n"<<s<<"is a palindrome.";
	//    }
	    cout<<i;
	}
	if(i==s.length()/2)
	{
		cout<<s<<" is a palindrome.";
	}
	else 
	{
		cout<<s<<" is not a palindrome.";
	}
	//q:
	//	cout<<"\n"<<s<<"is not a palindrome.";
//	if(i!=s.length()-1)
//	{
//		cout<<"\n"<<s<<"is not a palindrome.";
//	}
	//cout<<"\n"<<s<<"is not a palindrome.";
	return 0;
}
/*int main()
{
	string s;
	int i, count;
	cout<<"Enter the string:";
	cin>>s;
	int arr[s.length()];
	int j=0;
	for(i=s.length()-1;i>=0;i--)
    {
    	p=s.at(i);
    	arr[j++]=p;
    	
    	//for(int j=0;j)
    	for(int x=0;x<=s.length()/2;x++)
    	
    }
    
    for(int x=0;x<=s.length()/2;x++)*/
    

//}
















