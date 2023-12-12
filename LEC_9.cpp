#include<iostream>
using namespace std;

//      USE OF ARRAY IN FUNCTION
void printArray(int arr[], int size){
	cout<<"\nPrinting an array: ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
	cout<<"\nPrinting is done.";
}

//      FINDING MAXIMUM VALUE OF ARRAY
int getMax(int arr[], int size){
	int maxi=INT_MIN;
	for(int i=0; i<size; i++){
		maxi=max(maxi, arr[i]);
//		if(arr[i]>maxi)            // mini = min(mini, arr[i];
//			maxi= arr[i];
	}
	return maxi;
}

//      FINDING MINIMUM VALUE OF ARRAY
int getMin(int arr[], int size){
	int mini=INT_MAX;
	for(int i=0; i<size; i++){
		if(arr[i]<mini)             //mini = min(mini, arr[i];
			mini= arr[i];
	}
	return mini;
}

//     CHECK THE GIVEN NUMBER IS IN POWER OF 2 OR NOT?? 
bool setBits(int n){
	int count=0;
	while(n){
		if(n&1==1)
			count++;
		n=n>>1;
	}
	if(count==1)
		return 1;
	return false;
}

//      LINEAR SEARCH
bool linSearch(int arr[], int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i]==key)
			return true;
	}
	return false;
}

//       REVERSE ARRAY
void revArray(int arr[],int size){
	int temp;
	for(int i=0; i<size/2; i++){
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
}

int main(){
	
	/*
	//       INITIALISING AN ARRAY WITH 0
	int a[10]={0};
	for(int i=0; i<10; i++){
		cout<<a[i];
	}
	*/
	
	/*     INITIALISING OF AN ARRAY ELEMENT WITH 1
	int arr[10];
	for(int i=0; i<10; i++){
		arr[i]=1;
	}
	cout<< arr[6];
	*/
	
	/*
	//      FINDING LENGTH OF ARRAY
	int arr[10];
	int size = sizeof(arr)/sizeof(int);
	cout<<"Length of array = "<< size;
	*/
	
	/*
	//    PRINTING AN ARRAY THROUGH FUNCTION
	int arr[1000]={2, 29,  22};
	printArray(arr, 1000);                  // -------------------> DEFAULT VALUE OF INT ARRAY IS 0 .
	*/
	
	/*
	//     ANOTHER TYPE OF ARRAY
	char ch[20]={'P','P'};
	cout<<"\nPrinting an array: ";
	for(int i=0; i<20; i++){
		cout<<ch[i];
	}
	cout<<"HELLO";
	cout<<ch[3];                           // --------------->  DEFAULT VALUE OF CHAR ARRAY IS "WHITESPACE".
	cout<<"HELLO";
	*/
	
	/*
	//      FLOAT TYPE OF ARRAY 
	double fl[8]={7.0, 3.4, 4.87383};          // --------------->  DEFAULT VALUE OF double ARRAY IS {0.0}.
	cout<<"\nPrinting an array: ";
	for(int i=0; i<8; i++){
		cout<<fl[i]<<"  ";                
	}*/ 
	
	/*
	//      checking of NULL CHARACTER AND WHITESPACE IS SAME OR NOT
	char ch[20]={' '};            // {'\0'} SAME AS {' '}
	cout<<"\nPrinting an array: ";
	for(int i=0; i<20; i++){
		cout<<ch[i];
	}
	cout<<"HELLO";
	cout<<ch[3];                           // --------------->  DEFAULT VALUE OF CHAR ARRAY IS '\0' or "WHITESPACE".
	cout<<"HELLO";
	*/
	
	/*
//	cout<<INT_MIN<<endl;
//	cout<<INT_MAX<<endl;
	int size, arr[100];
	cout<<"Enter the size of array: ";
	cin>>size;
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Maximum value of array is "<< getMax(arr, size);
	
//	int arr[10] = { 32,918, 1, 8137, 827, 726,631, 1782178};
	cout<<"Minimum value of array is "<< getMin(arr, size);
	*/ 
	
	/*
	//    SUM OF ELEMENTS OF AN ARRAY
	int num[100];
	int size;
	cout<<"Enter the number of elements in array:";
	cin>> size;
	int sum=0;
	
	for(int i=0; i<size; i++){
		cin>> num[i];
		sum= sum+num[i];
	}
	cout<<"\nSum of elements of array is "<<sum;
	*/
	
	/*
	//      CHECK THE GIVEN NUMBER IS IN POWER OF 2 OR NOT??
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(setBits(n))
		cout<< n <<" is in the form of power of 2.";
	else
		cout<< n <<" is not in the form of power of 2.";		
	*/
	
	/*
	//       LINEAR SEARCH
	int arr[10] = { 2,18,0,837,27,76,31,17,434,9 };
	int key;
	cout<<"Enter the element to search for ";
	cin>> key;
	if(linSearch(arr, 10, key))
		cout<<"\nYES, the element is present in the array.";
	else
		cout<<"\nNO, the element is not found in the array.";
	*/
	
	/*
	//      REVERSE ARRAY
	int arr[100]={1,2,3,4,5,6};
	int size=6;
	cout<<"Printing original array: ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
	revArray(arr,size);
	cout<<"\nPrinting reverse array: ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
	*/
	return 0;
}

