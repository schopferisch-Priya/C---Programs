#include<iostream>
using namespace std;
int main(){
	int a= 4;
	int b=6;
	
	/*
	//  BITWISE OPERATOR
	cout<<" a & b = "<< (a&b) ;
	cout<<"\n a | b = "<< (a|b);
	cout<<"\n a ^ b = "<< (a^b);
	cout<<"\n Not a = "<< (~a) ;
	cout<<"\n Not b = "<< (~b) <<endl;
	*/ 
	
	/*
	//   LEFT & RIGHT SHIFT OPERATOR
	cout<<" 17 >> 1 = "<< (17>>1)<<endl;
	cout<<" 17 >> 2 = "<< (17>>2)<<endl;
	cout<<" 19 << 1 = "<< (19<<1)<<endl;
	cout<<" 19 << 2 = "<< (19<<2)<<endl;
	*/
	
	/*
	// PRE  &  POST increment/decrement
	int i = 14;
	cout<<" ++i = "<< (++i) << endl;		//i=15 , 15
	cout<<" i++ = "<< (i++) << endl;		//i=15 , 16
	cout<<" i-- = "<< (i--) << endl;		//i=16 , 15
	cout<<" --i = "<< (--i) << endl;		//i=14 , 14
	*/
	
	int i,n;
	cout<<"Enter the value of n: ";
	cin>> n;
	
	/*
	//    FOR LOOP
	for(int i=1; i<=n; i++){
		cout<< i << endl;
	}*/
	
	/*
	//   NOT SPECIFY THE STATEMENT INSIDE FOR LOOP
	i=1;
	for( ; i<=n ; ){
		cout<< i<< endl;
		i++;
	}
	*/
	
	/*
	//    INFINITE LOOP IF COND IS NOT GIVEN
	i=1;
	for( ; ; ){
		if(i<=n){
			cout<<i<< endl;	
		}
		else{
			break;
		}
		i++;
	}
	*/
	
	/*
	//     MULTIPLE INITIALISATION, CONDITION & UPDATION
	for(int a=0,b=1,c=2 ; a>=0 && b>=1 && c>=2 ; a--, b--, c--){
		cout<< a <<"\t"<< b <<"\t" << c <<"\t" << endl;
	}
	*/
	
	/*
	//    SUM OF N numbers
	int sum=0;
	for(i=1; i<=n; i++){
		sum = sum+ i;
	}
	cout<< " SUM = " << sum<< endl;
	*/
	
	/*
	//      FIBONACCI SERIES
	int next, f= 0, s=1;
	cout<<"Fibonacci Series : "<< f <<"  "<< s<< "  ";
	for(i=1; i<(n-1) ; i++){
		next= f+s ;
		cout<< next<< "  ";
		f=s;
		s=next;
	}*/
	
	/*
	//       PRIME  NUMBER
	for(i=2; i<n; i++){
		if((n % i) == 0){
			cout<< " Not Prime ";
			break;
		}
	}	
	if(i==n){
		cout<< " Prime ";
	}*/
	
	/*
	//       USE OF CONTINUE
	for(i=0; i<n; i++){
		cout<<" Hi!!"<< endl;
		cout<<" Hello"<<endl;
		continue;
		cout<<"Reply toh krdo";
	}*/
	
	/*
	//    SCOPE OF VARIABLE
	int x=5;
	cout<< x << endl;
	if(1){
		x=87;
		cout<<x<< endl;			// ERROR
	}
	cout<< x << endl;
	
	for(; x<=5 ; x++)
		cout<<x<< endl;
	*/
	
	//     SUBTRACT THE PRODUCT & SUM OF DIGITS OF AN INTEGER

	int sum=0, product=1;	
	while(n !=0){
		i = n%10;
		sum=sum+i;
		product=product*i;
		n=n/10;
	}
	int result = product - sum;
	cout<<"Result= "<<result<< endl;
	
	return 0;
}
