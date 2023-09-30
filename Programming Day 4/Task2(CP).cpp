#include <iostream>
using namespace std;
void tru (string tr);
void fals (string fal);
main (){
	string tr_fal;
	cout << "Enter 'true' or 'false': ";
	cin >> tr_fal;
if(tr_fal == "true")
{ 
	tru(tr_fal);
}
if(tr_fal == "false")
{
	fals(tr_fal);
} 
}
void tru (string tr)
{
	cout << "false"; 
}
void fals (string fal)
{ 
	cout << "true";
}