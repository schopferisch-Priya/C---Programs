#include<iostream>
#include<fstream>
using namespace std;

//OOP Practical B-4 File Programming

int main()
{
	ofstream S_wish;
	
	S_wish.open("Short_Wish_List.txt");
	
	cout<<"\n************ SHORT_WISH LIST **************";
	S_wish<<"\n Enjoy college life";
	S_wish<<"\n Improve communication skills";
	S_wish<<"\n Explore myself in every field";
	S_wish.close();
	
	ofstream L_wish;
	
	L_wish.open("Long_Wish_List.txt");
	cout<<"\n************ LONG_WISH_LIST ******************";
	L_wish<<"\n 9+s.g.p.a in every semester";
	L_wish<<"\n Indian Army after my B.tech";
	L_wish<<"\n Adopt atleast 1 orphan child & shaped her life in good manner";
	L_wish.close();
	
	char line[200];
	
	cout<<"\n Reading & Printing Wish List...";
	
	ifstream inf1;
	inf1.open("Short_Wish_List.txt");
	while(inf1)
	{
		inf1.getline(line,40);
		cout<<"\n"<<line;
	}
	inf1.close();
	
	char list[300];
	
	ifstream inf2;
	inf2.open("Long_Wish_List.txt");
	while(inf2)
	{
		inf2.getline(line,40);
		cout<<"\n"<<line;
	}
	inf2.close();
	
	cout<<"\n---------- THANK YOU--------------";
	
	return 0;
	
}
