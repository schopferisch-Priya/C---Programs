#include<iostream>
using namespace std;
int main()
{
	int x,i,num;
	cout<<"Please enter the array in ascending order.\n\n";
	cout<<"Enter no.of elements:";
	cin>>x;
	int arr[x];
	for(i=0;i<x;i++)
	{
		cout<<"arr["<<i<<"]=";
		cin>>arr[i];
	}
	cout<<"arr["<<x<<"]={";
	for(i=0;i<x;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	cout<<"\n\nSearch an element from an array\n\n";
	cin>>num;
	int beg=0, end=x-1,mid;
	
    while(beg<=end)
	{
		mid=(beg+end)/2;
		if(num==arr[mid])
		break;
		else if (num>arr[mid])
		beg=mid+1;
		else if(num<arr[mid])
		end=mid-1;
	}
	
    if(beg<=end)
	cout<<"\n"<<num<<" is present in given array."<<mid; 
	else
	cout<<"\n"<<num<<" is not present in given array."; 
	return 0;
}
	
