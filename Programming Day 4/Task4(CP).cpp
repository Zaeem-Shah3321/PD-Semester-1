#include <iostream>
using namespace std;
void chal(int speed1);
void notChal(int speed2);
main (){
	int speed3;
	cout << "Speed: ";
	cin >> speed3;
if(speed3 > 100)
{
	chal(speed3);
}
if(speed3 <= 100)
{
	notChal(speed3);
}
}
void chal(int speed1)
{
	cout << "Halt... YOU WILL BE CHALLENGED!!!";
}
void notChal(int speed2)
{
	cout << "Perfect! You're going good.";
}