#include <iostream>
using namespace std;
void possible (int tru);
void notPossible (int fals);
main (){
	int position;
	cout << "Enter your position: ";
	cin >> position;
	int position_friend;
	cout << "Enter your friend's position: ";
	cin >> position_friend;
	int difference;
	difference = (position_friend - position);
if(difference <= 6)
{
	possible(difference);
}
if(difference > 6)
{
	notPossible(difference);
}
}
void possible(int tru)
{
	cout << "true";
}
void notPossible(int fals)
{
	cout << "false";
}