#include<iostream>
using namespace std;

int pow(){
	int a,b;
	cout<<"\nEnter the base : ";
	cin>>a;
	cout<<"Enter the power of number: ";
	cin>>b;
	int ans = 1;
	for(int i=1; i<=b; i++){
		ans=ans*a;
	}
	return ans;
}

int fact(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f = f*i;
	}
	return f;
}

int isEven(int a){
	if(a&1){
		return 0;
	}
	else{
		return 1;
	}
}

int nCr (int n, int r){
	int result = fact(n)/(fact(r)*fact(n-r));
	return result;
}

int isPrime(int n){
	int temp;
	for(int i=2; i<n; i++){
		if(temp%n==0){
			return 0;
		}
	}
	return 1;
}

void fib(int n){
	int a=0, b=1;
	cout<<"Fibonacci Series: ";
	for(int i=1; i<=n; i++){
		if(i==1){
			cout<< a<< "  ";
		}
		else if(i==2){
			cout<< b<<"  ";
		}
		else{
			int temp = a+b;
		 	cout<<temp<<"  ";
			a=b;
			b=temp;
		}		
	}
}

int AP (int n){
	int term = 3*n + 7;
	return term;
}

int setBits(int a, int b){
	int count=0;
	while(a){
		if(a&1)
			count++;
		a= a>>1;
	}
	while(b){
		if(b&1)
			count++;
		b= b>>1;
	}	
	return count;
}

int main(){
	/*
	cout<<"\nPower of number*****";
	int ans = pow();
	cout<<"\nAnswer is "<< ans;
	ans = pow();
	cout<<"\nAnswer is "<< ans;
	*/
	
	/*
	//    EVEN-ODD NUMBER
	int a;
	cout<<"\nEnter the number and check even-odd behaviour of number: ";
	cin>> a;
	if(isEven(a)){
		cout<<"Even number";
	}
	else{
		cout<<"Odd number";
	}
	*/
	
	/*
	//  Combination of nCr
	int n, r;
	cout<<"\nEnter the value of n:";
	cin>>n;
	cout<<"\n Enter the value of r:";
	cin>> r;
	cout<<"\n\n Combination of nCr: "<< nCr(n,r);
	*/
	
	/*
	//     PRIME NUMBER
	int n;
	cout<<"\nEnter the number: ";
	cin>>n;
	if(isPrime){
		cout<<"Prime number";
	}
	else{
		cout<<"Composite number";
	}
	*/
	
	/*
	//     FIBONACCI SERIES
	int n;
	cout<<"Enter the number of terms : ";
	cin>> n;
	fib(n);
	*/
	
	/*
	//     ARITHMETIC PROGRESSION
	int n;
	cout<<"Enter the the value of n for AP: ";
	cin>> n;
	cout<<"n th term of AP = "<< AP(n);
	*/
	
	//       TOTAL NUMBER OF SET BITS IN GIVEN NUMBER
	int a, b;
	cout<<"Enter the 1st number: ";
	cin>> a;
	cout<<"Enter the 2nd number: ";
	cin>> b;
	cout<<"Total number of set bits in a & b is "<< setBits(a,b);
	
	return 0;		
}
