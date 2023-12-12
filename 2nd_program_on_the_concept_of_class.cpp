//Q.No.1:-  Write a C++ program using class to perform addition, subtraction, multiplication & division on two numbers.

#include<iostream>
using namespace std;
class num{
    int a;
    int b;
    public:
    int get(void);
    int add(void);
    int sub(void);
    int mult(void);
    int div(void);
};
int num::get(void){
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    return 0;
}
int num::add(void){
    return(a+b);
}
int num::sub(void){
    return(a-b);
}
int num::mult(void){
    return(a*b);
}
int num::div(void){
    return(a/b);
}
int main(){
    num n;
    n.get();
    cout<<"-----------------------------------"<<endl;
    cout<<"\n Addition of the number is: "<<n.add();
    cout<<"\n Subtraction of the number is: "<<n.sub();
    cout<<"\n Multiplication of the number is: "<<n.mult();
    cout<<"\n Division of the number is: "<<n.div();
    cout<<"\n------------------------------------"<<endl;
    return 0;
}

