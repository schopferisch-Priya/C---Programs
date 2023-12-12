/*C++ Program To read details of a book consists of chapters,chapters consist of sections and sections consist of subsections. Construct a tree and print the nodes.
Find the time and space requirements of your method.*/
# include <iostream>
# include <cstdlib>
# include <string.h>
using namespace std;
struct node
{
    char label[10];
    int ch_count;
    struct node *child[10];
}*root;
class GT
{
    public:
        void create_tree();  
        void display(node * r1);
        GT()
        {
            root = NULL;
        }
};
void GT::create_tree()
{
 int tbooks,tchapters,i,j,k;
 root = new node;
 cout<<"Enter name of book: ";
 cin>>root->label;
 cout<<"Enter no. of chapters in book: ";
 cin>>tchapters; 
 root->ch_count = tchapters;
 for(i=0;i<tchapters;i++)
 {
  root->child[i] = new node;
  cout<<"Enter Chapter name\n";
  cin>>root->child[i]->label;   
  cout<<"Enter no. of sections in  Chapter: "<<root->child[i]->label;
  cin>>root->child[i]->ch_count;
  for(j=0;j<root->child[i]->ch_count;j++)
  {
   root->child[i]->child[j] = new node;
   cout<<"Enter Section "<<j+1<<"name\n";
   cin>>root->child[i]->child[j]->label;   
   //cout<<"Enter no. of subsections in "<<r1->child[i]->child[j]->label;
   //cin>>r1->child[i]->ch_count;
  }
 }
}

void GT::display(node * r1)
{
 int i,j,k,tchapters;
 if(r1 != NULL)
 { 
    cout<<"\n-----Book Hierarchy---";
    cout<<"\n Book title : "<<r1->label;
    tchapters = r1->ch_count;
    for(i=0;i<tchapters;i++)
    {
  	  cout<<"\n  Chapter "<<i+1;
  	  cout<<" "<<r1->child[i]->label;   
  	  cout<<"\n Sections";
 	  for(j=0;j<r1->child[i]->ch_count;j++)
  	  {
        //cin>>r1->child[i]->child[j]->label;   
        cout<<"\n  "<<r1->child[i]->child[j]->label;
      }
	}
 }
}
int main()
{
    int choice;
   GT gt;
    while (1)
    {
        cout<<"-----------------"<<endl;
        cout<<"Book Tree Creation"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"1.Create"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
              gt.create_tree();
        case 2:
              gt.display(root);
            break;
        case 3:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }   
	}
}

/*#include <iostream>

using namespace std;
int main () {
	
	
   //int  *ptr = NULL;
   //cout << "The value of ptr is " << ptr ;
 
   return 0;
}

#include <iostream>
using namespace std;



/*void swap(int* x,int* y)
//int swap(int* ptr1,int* ptr2)
{
	*x = *x+*y;
	*y = *x - *y;
	*x = *x - *y;
}

int main()
{
	int a[5];
	for(int i=0;i<7;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<7;i++)
	{
		//cout<<"a["<<i<<"]=";
		cout<<a[i]<<"\t";
	}
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"\nb=";
	cin>>b;
	swap(&a,&b);
	x =
	cout<<"After swapping:a="<<a<<"\tb="<<b;
	return 0;
}*/

/*#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main () {

   int n[ 10 ]; // n is an array of 10 integers
 
   // initialize elements of array n to 0          
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; // set element at location i to i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value                      
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}*/
