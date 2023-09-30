#include <iostream>
using namespace std;
void time (int hours, int minutes);
main (){
	int hou;
	cout << "Enter the number of hours: ";
	cin >> hou;
	int min;
	cout << "Enter the number of minutes: ";
	cin >> min;
	time(hou,min);
}	
void time (int hours , int minutes)
{
	if (hours > minutes/60)
   {   
	cout << hours;
   }
	if (hours < minutes/60)
   {
	cout << minutes;
   }
} 
