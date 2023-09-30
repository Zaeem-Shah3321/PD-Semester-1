#include <iostream>
using namespace std;
void tpChecker(int total_days);
main (){
	int people;
	cout << "Number of people in the household: ";
	cin >> people;
	int rolls;
	cout << "Number of rolls of TP: ";
	cin >> rolls;
	int sheets_used;
	sheets_used = people * 57;
	int total_sheets;
	total_sheets = rolls * 500;
	int days;
	days = total_sheets / sheets_used;
	tpChecker(days);
}
void tpChecker(int total_days)
{
	if(total_days >= 14)
   {
	cout << "Your TP will last " << total_days << " days, no need to panic!";
   }
	if(total_days < 14)
   {
	cout << "Your TP will only last " << total_days << " days, buy more!";
   }
}