#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter no. of rows:";
	cin>>n;
	
	i=1;
	while(i<=n)
	{
		cout<<endl;
		j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		i++;
	}
	return 0;
}
