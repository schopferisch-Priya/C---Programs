#include<iostream>
using namespace std;

//      PIVOT ELEMENT IN ARRAY
int pivot(int arr[], int size){
	int s=0, e=size-1, mid;
	while(s<e){
		mid=s+(e-s)/2;
		if(arr[mid]>=arr[0])
			s=mid+1;
		else
			e=mid;
	}
	return s;
}

//      BINARY SEARCH FOR ELEMENT
bool binsearch(int arr[], int s, int e, int key){
	int mid=s+(e-s)/2;
	while(s<=e){
	 	if(arr[mid]==key)
	 		return 1;
	 	else if(arr[mid]<key)
	 		s=mid+1;
	 	else
	 		e=mid-1;
	 	mid=s+(e-s)/2;
	}
	return 0;
}

//   INTEGER PART OF SQUARE ROOT OF A NUMBER
int SqrtInt(int num){
	int s=0;
	int e=num;
	long long int mid=s+(e-s)/2;
	long long int ans=-1;
	while(s<=e){
		long long int square = mid*mid;
		if(square==num)
			return mid;
		else if(square>num){
			e=mid-1;
		}
		else{
			ans=mid;
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans; 
}

//      EXACT VALUE OF SQUARE ROOT OF NUMBER
double SqrtExact(int num,int p, float f_part){
	double ans, factor = 1;
	for(int i=0; i<p; i++){
		factor = factor/10;
		//cout<<endl<<factor;
		for(double j=f_part+factor; j*j<num; j=j+factor)
			ans=j;
	}
	return ans ;
} 

int main(){
	/*
	//     PIVOT ELEMENT IN AN ARRAY
	int arr[99]={7,9,1,2,3};
	int size=5;
	int index= pivot(arr,size);
	cout<<"Pivot element of the array is "<<arr[index];
	
	//      ELEMENT PRESENCE IN ROTATED BINARY ARRAY
	int s,e,key;
	bool checker;
	cout<<"\nEnter the number to search: ";
	cin>>key;
	if(key>=arr[index] && key<=arr[size-1]){
		s=index;
		e=size-1;
		checker=binsearch(arr,s,e,key);
	}
	else{
		s=0;
		e=index-1;
		checker=binsearch(arr,s,e,key);
	}
	
	if(checker)
		cout<<"Element is found.";
	else
		cout<<"Element is not found.";
	*/
	
	//       SQUARE ROOT OF AN ELEMENT
	int num;
	cout<<"\nEnter the number to find square root: ";
	cin>>num;
	float f_part=SqrtInt(num);
	cout<<"Integer part of Square root of "<< num <<" is "<<f_part<<endl;
	cout<<"\nExact value of Square root of "<< num <<" is "<<SqrtExact(num,3,f_part);
	return 0;
}
