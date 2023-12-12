#include<iostream>
using namespace std;
int main(){
	/*      CHECK CONTINUE STATEMENT IN SWITCH CASES
	int x=1;
	char ch='1';
	switch(ch){
		case 1: cout<<"*************number set***********";
				break;
		case '1': cout<<"**************character set***********";
				// continue ----------> it can use only inside loop.
		case 5 : cout<<"**************check set***********";
				break;		
		default: cout<<"**************defaulter set***********";
	}
	*/

	/*
	//        PYARA SA CALCULATOR	
	int n;
	int a=6, b=7;
	cout<<"Enter the value of a: ";
	cin>> a;
	cout<<"Enter the value of b: ";
	cin>> b;

	//cout<<"\n1.ADD \n2 SUBTRACT  \n3.Multipy  \n4.divide\n";
	cout<<"Enter the operation u want to perform:";
	cin>>ch;
	switch(ch){
		case '+': 
			cout<<"a+b = "<< a+b;
			break;
		case '-':
			cout<<"a-b = "<< a-b;
			break;
		case '*':
			cout<<"a*b = "<< a*b;
			break;
		case '/':
			cout<<"a/b = "<< a/b;
			break;
		default:
			cout<<"Please enter the valid operation!!";
	}*/
	
	//            NOTES OF 100, 50, 20 & 1
	int x, temp, amount;
	cout<<"Enter the amount of money = ";
	cin>>amount;
	int note= 1;
	switch(note){
		case 1: 
			x=amount/100;
			if(x>0)
				cout<<"\nNo. of 100 rupees notes = "<< x;
			temp= amount%100;
			if(temp == 0)
				break;
		case 2:
			x=temp/50;
			if(x>0)
				cout<<"\nNo. of 50 rupees notes = "<< x;
			temp= temp%50;
			if(temp == 0)
				break;
		case 3:
			x=temp/20;
			if(x>0)
				cout<<"\nNo. of 20 rupees notes = "<< x;
			temp= temp%20;
			if(temp == 0)
				break;
		case 4:
			x=temp/1;
			if(x>0)
				cout<<"\nNo. of 1 rupee notes = "<< x;
			temp= temp%1;
	}
}
