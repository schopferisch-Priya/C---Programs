#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[5]={7,9,18,2,724};
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
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
	
	return 0;
}
