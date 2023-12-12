#include <iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter no. of rows:";
	cin>>n;
	i=0;
	do{
	j=0;	
		do{
			cout<<"*";
			j++;
		}while(j<=i);
		
		cout<<"\n";
		i++;
	}while(i<n);
	return 0;
}
