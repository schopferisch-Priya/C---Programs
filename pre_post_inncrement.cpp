#include<iostream>
using namespace std;
int main()
{
 int a=20,x;
 
 // x=a++ + a; 
  //cout << x;  //41


 //x=++a + a; 
  //cout << x;  //42
 
 
 //x=++a;
 //cout << x << endl; //21
 //cout << a;  //21
 
 x=a++;
 cout << x << endl; //20
 cout << a;  //21
 
 
 
 
 return 0;	


}
