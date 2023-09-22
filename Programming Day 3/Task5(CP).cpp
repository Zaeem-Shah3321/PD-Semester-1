#include <iostream>
using namespace std;
main (){
	string name;
	cout << "Enter the Name of the Person: ";
	cin >> name;
	float target;
	cout << "Enter the target weight loss in kilograms: ";
	cin >> target;
	float days;
	days = target * 15;
	cout << name << " will need " << days << " days to lose " << target << " kg of weight by following the doctor's suggestions" ;
	}