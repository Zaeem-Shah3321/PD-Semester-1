#include <iostream>
using namespace std;
main (){
	int min;
	cout << "Number of Minutes: " ;
	cin >> min ;
	int frames;
	cout << "Frames per Second: ";
	cin >> frames;
	int fps;
	fps = (min * 60)* frames;
	cout << "Total Number of Frames: " << fps ;
	} 