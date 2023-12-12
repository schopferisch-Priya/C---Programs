#include<iostream>
#include<fstream>
using namespace std;

//OOP Practical B-4 File Programming

int main()
{
	ofstream games;
	
	games.open("Recent_games.txt");
	
	cout<<"\n************ Recent Games **************";
	games<<"\nBattlegrounds mobile india";
	games<<"\nCall of duty";
	games<<"\nClash of clans";
	games<<"\nPokemon unite";
	games<<"\nLeague of legends";
	games.close();
	
	char line[40];
	
	cout<<"\n Reading & Printing Item List...";
	
	ifstream inf;
	inf.open("Recent_games.txt");
	while(inf)
	{
		inf.getline(line,40);
		cout<<"\n"<<line;
	}
	
	inf.close();
	
	return 0;
}
	
	
