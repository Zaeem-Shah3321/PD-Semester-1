#include <iostream>
using namespace std;
main (){
	string m_name;
	cout << "Enter the movie name: ";
	cin >> m_name;
	int a_ticket;
	cout << "Enter the adult ticket price: $" ;
	cin >> a_ticket;
	int c_ticket;
	cout << "Enter the child ticket price: $" ;
	cin >> c_ticket;
	int a_sold;
	cout << "Enter the number of adult tickets sold: ";
	cin >> a_sold;
	int c_sold;
	cout << "Enter the number of child tickets sold: ";
	cin >> c_sold;
	float pct;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> pct;
	cout << "" << endl;
	cout << "Movie: " << m_name << endl;
	int t_amount;
	t_amount = (a_ticket * a_sold) + (c_ticket * c_sold);
	cout << "Total amount generated from ticket sales: $" << t_amount << endl;
	int charity;
	charity = (t_amount/ pct);
	cout << "Donation to charity ("<< pct << "%): $" << charity << endl;
	int remaining;
	remaining = t_amount - charity;
	cout << "Remaining amount after donation: $" << remaining;
	} 
	
	 