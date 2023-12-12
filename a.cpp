/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i;
	
	cout<<"Enter the string:";
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s.at(i)=='e')
		{
			break;
			cout<<i;
			//break;
			//continue;
		}
		
		
	}
	cout<<i;
	
	return 1;
}*/

#include<iostream>
#include<stdlib.h>

using namespace std;

const int MAX =10;

class Jobqueue
{
	int front, rear;
	int queue[MAX];
	public:
		void initialize();
		void display();
		void insert(int x);
		int delete1();
};

void Jobqueue :: initialize()
{
	rear = front = -1;
	for(int i=0;i<MAX; i++)
		queue[i]=0;
}

void Jobqueue :: insert(int x)
{
	if(rear == MAX-1 )
		cout<<"\nJob Queue is full.";
	else
	{
		rear++;
		queue[rear]=x;
		if (front == -1)
			front=0;	
	}
}

int Jobqueue :: delete1()
{
	if (front == -1 && rear == -1)
	{
		cout<<"\nJob Queue is empty.";
		return 0;		
	}
	int data = queue[front];
	queue[front]=0;
	if(rear==front)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}

	return data;
}

void Jobqueue :: display()
{
	cout<<"\nOperating System Job Queue.....\nConsider 0 as a blank.\n";
	for(int i=0; i<MAX; i++)
		cout<<"\t"<<queue[i];
}

int main()
{
	Jobqueue q1;
	int ch,x;
	q1.initialize();
	while(1)
	{
		cout<<"\n\nOperating System Job Queue.....\nQueue size is 10";
		cout<<"\n1.Add Job Queue";
		cout<<"\n2.Delete Job Queue";
		cout<<"\n3.Display job queue";
		cout<<"\n4.Exit";
		cout<<"\nEnter ur choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter job number: ";
				cin>>x;
				q1.insert(x);
				q1.display();
				break;
			case 2:
				x=q1.delete1();
				if(x>0)
					cout<<"\nJob number "<<x<<" is deleted successfully.";
				q1.display();
				break;
			case 3:
				q1.display();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
