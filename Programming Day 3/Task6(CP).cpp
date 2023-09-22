#include <iostream>
using namespace std;
main (){
	float size;
	cout << "Enter the size of the fertilizer bag in pounds: ";
	cin >> size;
	float cost;
	cout << "Enter the cost of the bag: $";
	cin >> cost;
	float area;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	cin >> area;
	float cpp;
	cpp = (cost / size);
	cout << "Cost of fertilizer per pound: $" << cpp << endl;
	float cps;
	cps = (cost / area );
	cout << "Cost of fertilizing per square foot: $" << cps;
	}