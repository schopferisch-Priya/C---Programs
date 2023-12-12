#include<iostream>
using namespace std;
int main()
{
	int i, n, p;
	cout<<"Convert Decimal to Binary Number\n";
	cout<<"Enter the decimal number:";
	cin>>n;
	int arr[1000];
	int j=0;
	int count=0;
	for(i=n;i>0;i=i/2)
	{
		p=i%2;
		arr[j++]=p;
		count++;
	}
	cout<<"\nBinary form of "<<n<<" is ";
	for(i=count-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	return 0;
}
