#include<iostream>
using namespace std;
int count=0;
void push(int a[])
{
	int x;
	cout<<count;
	cout<<"Enter an element:";
	cin>>x;
    a[count]=x;
	count++;
 } 
 int pop(int a[])
 {
 	count--;
 	cout<<count;
 	if(count<0)
 	count = 0;
	else
	{
	for(int i=0;i<count;i++)
	a[i]=a[i+1];
    }
    a[count]=0;
 }
 
 int traverse(int* a)
 {
 	cout<<count;
	cout<<"a["<<count<<"]={";
	for(int i=0;i<count;i++)
	cout<<a[i]<<"\t";
    cout<<"}";
 }

int main()
{
	int n,x,i,choice;
	cout<<"no. of elements in array:";
	cin>>n;
	int a[n] = {0};
	
	cout<<"Before entry \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	do{
		cout<<"\n1.Push an element\n2.Pop an element\n3.Traversing of an array\n4.Exit from program\n";
		 cout<<"\n\nEnter your choice:";
	    cin>>choice;
	    
	    if(choice==4)
	    break;
	    
	    switch(choice)
	    {
	    	case 1:
			    if(count<n)                        //PUSH
	    		push(a);  
				else
	    		cout<<"we can't store more than "<<n<<" elements. Because array size is "<<n;                        //PUSH
				break;
				
			case 2:                             //POP
			    pop(a);
			    break;
			    
			case 3:                              //TRAVERSE
				traverse(a);
				break;
				
			default:
			    cout<<"\nSorry your choice is mismatch.Choose the correct one.";	
		}	
	}while(1);
	cout<<"Before exit \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
} 

