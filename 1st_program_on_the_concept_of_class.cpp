//Q.No.2:-  Write a C++ program using class to enter the name and cost of two stationary items and display them.

#include <iostream>
using namespace std;

class stationary
{
private:
        char  name[30];
        int   cost;
public:
        void getDetails(void);
        void putDetails(void);
};

void stationary::getDetails(void){
        cout << "Enter Name of stationary ite: " ;
        cin >>name;
        cout <<"Enter Cost: ";
        cin >>cost;
}

void stationary::putDetails(void){
        cout << "\nName: "<<name;
        cout << "\nCost: " <<cost <<" Rs";
}

int main()
{
        stationary std; 
        std.getDetails();
        std.putDetails();
return 0;
}

