#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n, bit, ans=0, i=0, exit;
	cout<<"Enter the number: ";
	cin>> n;
	
	/*
	while(n!=0){
		bit = n & 1;
		ans = (bit* pow(10,i)) + ans;
		n = n>>1;
		i++;
	}
	cout<< ans;    */
	
	
	/*
	while(n!=0){
		bit = n%10;
		ans = (bit*pow(10,i)) + ans;
		n = n>>1;
		i++;
	}
	cout<< ans;*/
	
	/*
	//     BINARY TO DECIMAL
	while(n!=0){
		bit = n%10;
		ans = (bit*pow(2,i)) + ans;
		n = n/10;
		i++;
	}
	cout<<"Answer is " <<ans <<endl;
	*/
	
	/*
	//      REVERSE THE NUMBER
	while(n!=0){
		bit = n%10;
		ans = ans*10 + bit;
		n= n/10;
		i++;
	}
	cout<<"Answer is " <<ans <<endl;
	*/
	/*
	//    COMPLEMENT OF 10 BASE               WRONG  WRONG   WRONG
	int j=0;
	while(n!=0){
		bit=n%10;
		ans = ans*10 + bit;
		n= n/10;
		i++;
	}
	n = ~ans;
	ans=0;
	while(n!=0 && j<=i){
		bit= n&1;
		if(bit == 1){
			ans = bit* pow(2,j) + ans;
		}
		n = n>>1;
		j++;
	}	
	cout<< "Complement of the base 10 number is "<< ans;
	*/
	
	/*
	//      POWER OF BASE 2
	int rem;
	while(n>1){
		rem = n%2;
		if(rem != 0){
			cout<<"The number is not the power of 2.";
			break;
		}
		n = n/2;
	}
	if(n==1){
		cout<<"The number is the power of 2.";
	}
	if(n==0){
		cout<<"0 is the exception case of power of base2.";
	}
	*/
	
}
