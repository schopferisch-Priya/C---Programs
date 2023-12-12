#include<iostream>
using namespace std;

int bin(int arr[], int beg,int end, int num)   //int arr[], int mid,int num
{
	if(beg<=end)
	{
	int mid=(beg+end)/2;
	if(num==arr[mid])
	return mid;
	else if(num>arr[mid])
	{
		bin(arr,mid+1,end,num);
	}
	else
	{
		bin(arr,beg,mid-1,num);
	}
	}
	else
	return -1;
}

int main()
{
	int x,i,num;
	cout<<"Please enter the array in ascending order.\n\n";
	cout<<"Enter no.of elements:";
	cin>>x;
	int arr[x];
	int r;
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
	cout<<"}";
	
	cout<<"\n\nSearch an element from an array\n\n";
	cin>>num;
	r=bin(arr,0, x-1,num);
	
	
	cout<<"result\t"<<r;	         
	return 0;
}
	
