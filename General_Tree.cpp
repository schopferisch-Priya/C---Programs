# include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct node
{
	char label[10];
	int count;
	struct node* child[10];
}*root;

class GT
{
	public:
		void create_tree();
		void display(node * r1);
		GT()
		{
			root= NULL;
		}
};

void GT :: create_tree()
{
	int tbooks, tchapters, i, j, k;
	root = new node;
	cout<<"\nEnter name of the book: ";
	cin>>root->label;
	cout<<"\nEnter no. of chapters in book: ";
	cin>>root->count;
	
	for(i=0; i<root->count; i++)
	{
		root->child[i] = new node;
		cout<<"\nEnter name of chapter"<<i+1<<" : ";
		cin>>root->child[i]->label;
		cout<<"\nEnter sections in chapter "<< root->child[i]->label <<" : ";
		cin>>root->child[i]->count;
		
		for(j=0; j<root->child[i]->count; j++)
		{
			root->child[i]->child[j] = new node;
			cout<<"\nEnter name of "<<" section"<<j+1<<" : ";
			cin>>root->child[i]->child[j]->label;
		}
	}
}

void GT :: display(node* r1)
{
	int i, j, k;
	if(r1 != NULL)
	{
		cout<<"\n\n\n------------ Book Hierarcy -------------";
		cout<<"\nBook Title: "<< root->label;
		
		for(i=0; i<root->count; i++)
		{
			cout<<"\n\n  Chapter "<<i+1 <<": "<< root->child[i]->label;
			cout<<"\n  Section ";
			for(j=0; j<root->child[i]->count; j++)
			{
			//	cout<<"\n  Section \n";
				cout<<"\n    "<< root->child[i]->child[j]->label;
			}
		}
	}
}

int main()
{
	GT gt;
	int choice;
	while(1)
	{
		cout<<"************** BOOK TREE CREATION *****************";
    	cout<<"\n1.Create";
	    cout<<"\n2.Display";
	    cout<<"\n3.Exit";
	    cout<<"\nEnter ur choice: ";
	    cin>>choice;
	    switch (choice)
	    {
			case 1:
				gt.create_tree();
			case 2:
				gt.display(root);
			case 3:
				exit(1);
			default:
				cout<<"\nWrong choice";
		}
	}
	return 0;
}

