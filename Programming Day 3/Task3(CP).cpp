#include <iostream>
using namespace std;
main (){
	float iv;
	cout << "Enter Initial Velocity (m/s): ";
	cin >> iv;
	float acc;
	cout << "Enter Acceleration (m/s^2): ";
	cin >> acc;
	float time ;
	cout << "Enter Time (s): ";
	cin >> time;
	float fv;
	fv = (acc * time)+iv;
	cout << "Final Velocity (m/s): "<< fv ;
	}