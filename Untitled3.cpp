#include<iostream>
using namespace std;
int main()
{
	int num, i,j;
	cin>>num;
	cout<<"Star pattern in decreasing order:"<<endl;
	for(i=1;i<=num;i++)
	{
		
     for(j=num;j>=i;j--)
	 {
	 	cout<<"*";
	 }
	 cout<<endl;
	}
	return 0;
}
