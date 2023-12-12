#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, j;
	int count;
	cout<<"Enter the string:";
	cin>>s;
	
/*	for(i=0;i<s.length();i++)
	{
		count=0;		
		for(j=0;j<s.length();j++)
		{
			if(s.at(i)==s.at(j))
			{
				count++;
			}
		}
		
		cout<<"["<<s.at(i)<<"]="<<count++<<endl;
	}*/
loop:	for(i=0;i<s.length();i++)
	{
			for(j=0;j<s.length();j++)
			{
				count=0;
				if(i<j)
				{
				   if(s.at(i)==s.at(j))
				   {
				   	    //break;
				   	    //i=i++;
				        goto loop;
				   }
				}
				else
				{
					for(j=i;j<s.length();j++)
					{
						if(s.at(i)==s.at(j))
						count++;
					}
				}	
			}
		cout<<"["<<s.at(i)<<"]="<<count++<<endl;
	}
	return 0;
}
