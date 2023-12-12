#include<iostream>
using namespace std;

/*
bool isPossible(int arr[], int n, int mid, int m){
	int pagecount=0;
	int studentcount=1;
	
	for(int i=0; i<n; i++){
		if(pagecount + arr[i] <= mid)
			pagecount += arr[i];
		else{
			studentcount ++;
			if(studentcount>m || arr[i]>mid){
				return false;
			}
			pagecount = arr[i];
		}
	}
	return true;
}

//     EFFECTIVE BOOK ALLOCATION PROBLEM
int allocBook(int arr[], int n, int m){
	
	int sum=0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	
	int s=0, e=sum, mid=(s+e)/2;
	int ans=-1;
	while(s<=e){
		if(isPossible(arr,n,mid,m)){
			ans=mid;
			s=mid+1;
			cout<<"a";
		}
		else
			e=mid-1;
			//cout<<"a";
	}
	return ans;
}
*/

int main(){
	int arr[10]={10, 20, 30, 40};
	int n= 4;
	int m=2;
	cout<<"value at partition done = "<< allocBook(arr, n, m);
	return 0;
}
