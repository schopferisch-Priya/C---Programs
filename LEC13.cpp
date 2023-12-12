#include<iostream>
using namespace std;

int firOccur(int arr[], int size, int key){
	int s=0, e=size-1, ans=-1,mid;
	while(s<=e){
		mid=s+(e-s)/2;
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key)
			s=mid+1;
		else
			e=mid-1;
	}
	return ans;
}

int lastOccur(int arr[], int size, int key){
	int s=0, e=size-1, ans=-1, mid;
	while(s<=e){
		mid=s+(e-s)/2;
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]<key)
			s=mid+1;
		else
			e=mid-1;
	}
	return ans;
}

int peakvalue(int arr[], int size){
	int s=0, e=size-1, mid;
	while(s<e){
		mid=s+(e-s)/2;
		if( arr[mid] < arr[mid+1] ){
			s=mid+1;
		}
		else
			e=mid;
	}
	return s;
}

int main(){
	
	//      FIRST & LAST OCCURENCE OF ELEMENT IN AN ARRAY
	int arr[7]={0,1,2,2,2,4,5};
	pair<int,int> p;
	p.first= firOccur(arr, 7, 2);
	p.second= lastOccur(arr, 7, 2);	
	cout<<"First occurence of 2 at index:"<<p.first;
	cout<<"\nLast occurence of 2 at index:"<<p.second;
	cout<<"\nTotal no. of occurence of element 2: "<<(p.second-p.first)+1;
	
	/*
	int mountain[8]={1, 3, 4, 10, 7, 5, 3, 1};
	int index = peakvalue(mountain, 8);
	cout<<"Peak value of a mountain array is "<< mountain[index];
	*/
	return 0;
}
