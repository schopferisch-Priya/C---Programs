#include<iostream>
using namespace std;

//       BINARY  SEARCH
int binSearch(int arr[], int size, int key){
	int beg=0, end=size-1;
	int mid;
	while(beg<=end){
		mid=(beg+end)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid]<key)
			beg=mid+1;
		else
			end=mid-1;
	}
	return -1;
}

int main(){
	int arr[6]={2, 4, 15, 20, 28};
	int key, size=5;
	cout<<"Enter the element for search: ";
	cin>>key;
	int index=binSearch(arr, size, key);
	if(index==-1)
		cout<<"\nSorry, Element is not found.";
	else
		cout<<"Element "<< key<<" is found at index "<<index;
		return 0;
}
