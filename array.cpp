#include<iostream>
using namespace std;
int main()
{
	int arr[5]={7,9,18,2,724};
	cout<<"Array in ascending order:"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				int c=arr[j];
				arr[j]=arr[i];
				arr[i]=c;
			}
		}
		cout<<arr[i]<<"\t";
	}
	cout<<endl<<endl<<arr[0]<<" is the smallest number in array."<<endl;
	cout<<arr[4]<<" is the largest number in array."<<endl;
	
	return 0;
}
