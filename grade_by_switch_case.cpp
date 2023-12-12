#include<iostream>
//#include<string>
using namespace std;
int main()
{
	int choice;
	cout<<"**********Grade of the student based on marks********";
	cout<<"\n 1. marks between 91-100";
	cout<<"\n 2. marks between 81-90";
	cout<<"\n 3. marks between 71-80";
	cout<<"\n 4. marks between 61-70";
	cout<<"\n 5. marks between 41-60";
	cout<<"\n Enter the choice in which ur marks lie:";
	cin>>choice;
	
    switch(choice) 
	{
		case 1:
			cout<<"\nUr grade is A.";
		    break;
		case 2:
			cout<<"\nUr grade is B.";
			break;
		case 3:
			cout<<"\nUr grade is C.";
			break;
		case 4:
			cout<<"\nUr grade is C.";
			break;
		case 5:
			cout<<"\nUr grade is D.";
			break;  
	default:
		cout<<"\nFail";
    }
    return 0;
}
