#include<iostream>
#include <cstdlib>
using namespace std;

struct node
{
	int a;
	struct node* next;
};

void display(struct node* k)
{
	cout<<"\nLinked List:";
	while(k!='\0')
    {
    	cout<<k->a<<"\t";
    	k=k->next;
	}
}

void insertanode(int pos,struct node* p)
{
	for(int i=1;i<pos;i++)
	{
		if(i==pos-1)
		{
		    struct node* ptr=new node;
		    cout<<"Enter data:";
		    cin>>ptr->a;
		    ptr->next=p->next;
		    p->next=ptr;
	    }
	    p=p->next;
    }    
}

int main()
{
	int choice,pos;
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
	
	display(head);
	
	cout<<"\n\nEnter the position where u want to insert a new node:";
	cin>>pos;
	
	if(pos==1)
	{
		struct node* ptr=new node;
		cout<<"Enter data:";
		cin>>ptr->a;
		ptr->next=head;
		head=ptr;
	}
	else
	{
		insertanode(pos,head);
	}
	display(head);
    /*k=head;
    while(k!='\0')
    {
    	cout<<k->a<<"\t";
    	k=k->next;
	}*/

	return 0;
}
