#include <iostream>
using namespace std;
main (){
	int sm;
	cout << "Number of square meters you can paint: ";
	cin >> sm;
	int width;
	cout << "Width of the single wall (in meters): ";
	cin >> width;
	int height;
	cout << "Height of the single wall (in meters): ";
	cin >> height;
	int walls;
	walls = sm/(height * width);
	cout <<  "Number of walls you can paint: " << walls;
	}
