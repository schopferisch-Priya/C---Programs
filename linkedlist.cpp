#include<iostream>
#include <cstdlib>
using namespace std;

struct node
{
	int a;
	struct node* next; 
};

int main()
{
	int choice;
	struct node* head='\0';
	struct node* l='\0';
	struct node* k='\0';

	do{
		cout<<"1.Continue the linked list\n2.Stop the linked list\n";
		cout<<"Enter the choice:";
		cin>>choice;
		if(choice==2)
		break;
		
		switch(choice)
		{
			case 1:
	        if(head=='\0')
	        {
	    	    l=new node;
	    	    cout<<"Enter data:";
		        cin>>l->a;
		        l->next='\0';
		        head=k=l;
            }
	        else
	        {
	        	l=k;
		        k=new node;
			    cout<<"Enter data:";
		        cin>>k->a;
				l->next=k;	
    	        k->next='\0';
	        }
	          break;
	          
		    case 2:
		      break;
		      
			default:
			  cout<<"Sorry your choice is mismatch.Choose the correct one.\n"; 	
		}
		cout<<endl;		
	}while(1);
	
	cout<<"\nLinked List:";
	
    k=head;
    while(k!='\0')
    {
    	cout<<k->a<<"\t";
    	k=k->next;
	}

	return 0;
}
