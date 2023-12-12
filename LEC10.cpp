#include<iostream>
using namespace std;

//     get array elements
void getinput(int arr[], int size){
	cout<<"Taking array inputs:";
	for(int i=0; i<size; i++)
		cin>> arr[i];
}	

//     displaying of an array
void display(int arr[], int size){
	cout<<"Printing of an array: ";
	for(int i=0; i< size; i++)
		cout<<arr[i]<<"  ";
}

//      SWAP ALTERNATE
void swapArray(int arr[], int size){
	int temp;
	for(int i=0; i<size-1; i=i+2){
		temp= arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
}

//      UNIQUE ELEMENT IN 2m+1 ARRAY
int uniElement(int arr[], int size){
	int count;
	for(int i=0; i<size; i++){
		count=1;
		for(int j=0; j<size; j++){
			if(i!=j){
				if(arr[i]==arr[j]){
					count++;
					break;
				}
			}
		}
		if(count==1)
			return arr[i];
	}
}

//       UNIQUE  ARRAY
bool uniArray(int arr[], int size){
	int i,j, count;
	int k=0;
	int num[100];
	for(i=0; i<size; i++){
		count=1;
		for(j=i-1; j>=0; j--){
			if(arr[j]==arr[i])
				break;
			}
		}
		for(j=i; j<size; j++){
			if(arr[i]==arr[j])
				count++;
		}
		num[k++]=count;
	
	
	for(int x=0; x<k; x++){
		for(j=x+1; j<k; j++){
			if(num[x]==num[j])
				return 0;		
		}		
	}
	return 1;
} 

//       DUPLICATE ELEMENT OF AN ARRAY
int dupElement(int arr[], int size){
	int ans=0;
	for(int i=0; i<size; i++){
		ans= ans^arr[i];
	}
	for(int i=1; i< size; i++){
		ans= ans^i;
	}
	return ans;
}

//        INTERSECTION OF 2 ARRAYS
void Intersection(int a1[], int a2[], int size1, int size2){
	int a3[100];
	int count=0;
	for(int i=0; i<size1; i++){
		for(int j=0; j<size2; j++){
			if(a1[i]==a2[j]){
				a3[count]=a1[i];
				a2[j]= INT_MIN;
				count++;
				break;	
			}
		}
	}
	for(int i=0; i<count; i++){
		cout<<a3[i]<<"  ";
	}
}

//         OPTIMISE SOLUTION OF INTERSECTION OF AN ARRAY   ------------------>   2pointer approach
void intersection(int a1[], int a2[], int size1, int size2){
	int  i=0, j=0, count=0;
	int a3[100];
	while(i<size1 && j<size2){
		if(a1[i]<a2[j])
			i++;
	
		else if(a1[i]==a2[j]){
			a3[count]= a1[i];
			count++;
			i++, j++;
		}
		else
			j++;
	}
	for(int i=0; i<count; i++){
		cout<<a3[i]<<"  ";
	}
}

//        PAIR SUM OF 2 ELEMENTS
void pairSum(int arr[], int size, int sum){
	int count=0, a, b;
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if((arr[i]+arr[j])== sum){
				a=min(arr[i], arr[j]);
				b=max(arr[i],arr[j]);
				cout<<a<<", "<<b<< endl;
				break;
			}
		}
	}
}

//           TRIPLET SUM OF 3 ELEMENTS
void triSum(int arr[], int size, int sum){
	int i, j, k;
	for(i=0; i<size-2; i++){
		for(j=i+1; j<size-1; j++){
			for(k=j+1; k< size; k++){
				if((arr[i]+arr[j]+arr[k])==sum){
					cout<< arr[i]<<", "<< arr[j]<<", "<< arr[k]<<endl;
					break;
				}
			}
		}
	}
}

//        SORTING OF 0 & 1
void sort(int arr[], int size){
	int i=0, j=size-1, temp;
	while(i<=j){
		if(arr[i]==0 && arr[j]==1)
			i++, j--;
		else if(arr[i]==0 && arr[j]==0)
			i++;
		else if(arr[i]==1 && arr[j]==0){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++, j--;
			
		}
		else
			j--;
	}
}

int main(){
	/*
	int arr[100]={1,2,3,4,5,6};
	int size= 6;
	swapArray(arr, size);
	cout<<"\n Printing of Swap Array: ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
	*/ 
	
	/*
	//       UNIQUE ELEMENT
//	int arr[100] = {1,3,2,1,4,2,3};
//	int arr[100]= {2,3,1,6,3,6,2};
//  int arr[100]={2,4,7,2,7};
	int arr[100]={1,3,1,3,6,6,7,10,7};
	int size=9;
	cout<<"Unique element= "<< uniElement(arr, size);
	*/
	
	/*
	//      UNIQUE   ARRAY
	int arr[100]= {1,3,3,2,5,2,1,2,1,1} ;
	int size=10;
	if(uniArray(arr, size))
		cout<<"Unique Array";
	else
		cout<<"Not Unique Array";
	*/
	
	/*
	//     DUPLICATE ELEMENT OF AN ARRAY
	int arr[100], size;
	cout<<"Enter the array size:";
	cin>>size;
	getinput(arr,size);
	cout<<"\nDuplicate element of an array:"<< dupElement(arr, size);
	*/
	
	/*
	//     INTERSECTION OF 2 ARRAYS 
	int a[100], size1;
	cout<<"Enter the array size:";
	cin>>size1;
	getinput(a,size1);
	int b[100], size2;
	cout<<"Enter the array size:";
	cin>>size2;
	getinput(b,size2);
	
	cout<<"\nIntersection of given 2 array:";
	intersection(a,b,size1,size2);
	*/
	
	/*
	//        PAIR  SUM
	int arr[100];
	int size;
	int sum;
	cout<<"Enter the array size:";
	cin>>size;
	getinput(arr,size);	
	cout<<"Enter the value of sum:";
	cin>> sum;
	
	cout<<"Pair sum of the array:\n";
	pairSum(arr, size, sum);
	*/ 
	
	/*
	//        TRIPLET SUM OF 3ELEMENTS 
	int arr[100];
	int size;
	int sum;
	cout<<"Enter the array size:";
	cin>>size;
	getinput(arr,size);	
	cout<<"Enter the value of sum:";
	cin>> sum;
	
	cout<<"Triplet sum of the array:\n";
	triSum(arr, size, sum);
	*/
	
	//        SORTING OF 0 & 1 -------------> USING 2-POINTER APPROACH
	int arr[100];
	int size;
	int sum;
	cout<<"Enter the array size:";
	cin>>size;
	getinput(arr,size);	
	sort(arr, size);
	display(arr, size);
	
	return 0;
}
