#include <iostream>
using namespace std;
void pakistan (string name1,float price1);
void ireland  (string name2,float price2);
void india    (string name3,float price3);
void england  (string name4,float price4);
void canada   (string name5,float price5);
main (){
	string country;
	cout << "Enter the country's name: ";
	cin >> country;
	float ticket;
	cout << "Enter the ticket price in dollars: $";
	cin >> ticket;
if(country == "Pakistan")
{ 
	pakistan(country,ticket);
}
if(country == "Ireland")
{ 
	ireland(country,ticket);
}
if(country == "India")
{
	india(country,ticket);
}
if(country == "England")
{ 
	england(country,ticket);
}
if(country == "Canada")
{
	canada(country,ticket);
}
}
void pakistan(string name1,float price1)
{
	price1 = (price1 - (price1 * 0.05));
	cout << "Final ticket price after discount: $" << price1;
}
void ireland(string name2,float price2)
{
	price2 = (price2 - (price2 * 0.1));
	cout << "Final ticket price after discount: $" << price2;
}
void india(string name3,float price3)
{
	price3 = (price3 - (price3 * 0.2));
	cout << "Final ticket price after discount: $" << price3;
}
void england(string name4,float price4)
{
	price4 = (price4 - (price4 * 0.3));
	cout << "Final ticket price after discount: $" << price4;
}
void canada(string name5,float price5)
{
	price5 = (price5 - (price5 * 0.45));
	cout << "Final ticket price after discount: $" << price5;
} 





 