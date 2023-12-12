#include<iostream>
using namespace std;
int main()
{
	int x,y,z,max,min;
	cout<<"1st number:";
	cin>>x;
	cout<<"2nd number:";
	cin>>y;
	cout<<"3rd number:";
	cin>>z;
	cout<<endl;
	
	max=(x>y)?((x>z)?x:z):((y>z)?y:z);
	cout<<"Largest number among given 3 numbers:"<<max<<endl;
	
	min=(x<y)?((x<z)?x:z):((y<z)?y:z);
	cout<<"Smallest number among given 3 numbers:"<<min<<endl;
	
	return 0;
}
