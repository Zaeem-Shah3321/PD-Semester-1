#include <iostream>
using namespace std;
main (){
	float imp;
	cout << "Enter Imposter Count: ";
	cin >> imp;
	float player;
	cout << "Enter Player Count: ";
	cin >> player;
	float chances;
	chances = 100*(imp/player);
	cout << "Chance of being an imposter: " << chances << "%" ;
	}