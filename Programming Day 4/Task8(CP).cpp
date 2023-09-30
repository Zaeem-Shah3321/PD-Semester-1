#include <iostream>
using namespace std;
void days(int mpdd , int hour , int minutes);
main (){
	int workingDays;
	workingDays = 365;
	int holidays;
	cout << "Holidays: ";
	cin >> holidays;
	int remainingDays;
	remainingDays = workingDays - holidays;
	int mpd;
	mpd = (remainingDays * 63) + (holidays * 127);
	int hou;
	int difference;
	difference = (30000 - mpd);
	hou = difference/60;
	int minutes;
	minutes = difference-hou * 60;
	days(mpd,hou,minutes);
}
void days(int mpdd, int hour , int minutes)
{
	if(mpdd > 30000)
   {
	cout << "Tom will run away" << endl;
	cout << -1*hour << " hours and " << -1*minutes << " minutes for play"; 
   }
	if(mpdd <= 30000)
   {
	cout << "Tom sleeps well" << endl;
	cout << hour << " hours and " << minutes << " minutes less for play";
   }
}
	
 