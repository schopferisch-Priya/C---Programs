#include <iostream>
using namespace std;
int main()
{
	int choice,num1,num2;
	
	/*cout<<"\n1.Add";
	cout<<"\n2.Subtract";
	cout<<"\n3.Multiply";
	cout<<"\n4.Divide";
	cout<<"\n5.Exit from program";
			
	cout<<"\n\nEnter your choice:";
	cin>>choice;*/
		
	do{
	
		cout<<"\n1.Add";
	    cout<<"\n2.Subtract";
	    cout<<"\n3.Multiply";
	    cout<<"\n4.Divide";
	    cout<<"\n5.Exit from program";
	    
	    cout<<"\n\nEnter your choice:";
	    cin>>choice;
	    
	    if(choice==5)
	    {
	    	break;
		}
	    cout<<"\n num1=";
        cin>>num1;
		cout<<"\n num2=";
		cin>>num2;
		
       switch(choice){
		case 1:
		   cout<<"\nAdd="<<num1+num2;
		    break;
				
		case 2:
		   cout<<"\nSubtract="<<num1-num2;			
		    break;
				
		case 3:
		    cout<<"\nMultiply="<<num1*num2;			
		    break;
				
		case 4:
		    cout<<"\nDivide="<<num1/num2;			
		    break;
			
		default:
		    cout<<"\nSorry your choice is mismatch.Choose the correct one.";
	    }	
	}while(1);
	
	cout<<"\nThank you";
	return 0;
}
