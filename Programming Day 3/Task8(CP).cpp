#include <iostream>
using namespace std;
main (){
	float v_price;
	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> v_price;
	float f_price;
	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> f_price;
	float t_vegetable;
	cout << "Enter total kilograms of vegetables: ";
	cin >> t_vegetable;
	float t_fruit;
	cout << "Enter total kilograms of fruits: ";
	cin >> t_fruit;
	float t_earning;
	t_earning = ((v_price * t_vegetable) + (f_price * t_fruit))/1.94;
	cout << "Total earnings in Rupees (Rps): " << t_earning ;
	} 