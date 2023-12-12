#include<iostream>
using namespace std;
int main()
{
	int x,m,i,j;
	cout<<"Enter number of elements in array:";
	cin>>m;
	int arr[m];
	for(i=0;i<m;i++)
	{
		cout<<"Enter the "<<i<<"th index number:";
		cin>>x;
		//cout<<endl;
			for(j=i-1;j>=0;j--)
			{
				if(x>arr[j])
				{
					arr[j+1]=arr[j];
				}
				else
				{
					arr[j+1]=x;
					break;
				}
			}
		if(j<0)
		arr[0]=x;
	}
	cout<<"arr["<<m<<"] is in descending order:\n";
	for(i=0;i<m;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
