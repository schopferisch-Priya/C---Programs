#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Grade="";
	int m;
	cout<<"Enter ur marks:";
	cin>>m;
	Grade= (m>=91&&m<=100 ? "A" : (m>=81&&m<=90 ?  "B": (m>=71&&m<=80 ? "C" : (m>=61&&m<=70 ? "D" : (m>=41&&m<=60 ? "E" : "FAIL")))));
	
	cout<<"\n Grade of the student is:"<<Grade;
	return 0;
}
