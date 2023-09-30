#include <iostream>
using namespace std;
void num1 (int num_1);
void num2 (int num_2);
main (){ 	
	int number1;
	cout << "Enter the first number: ";
	cin >> number1;
	int number2;
	cout << "Enter the second number: ";
	cin >> number2;
if(number1 == number2)
{
	num1(number1);
}
if(number1 != number2)
{	
	num2(number2);
}
}
void num1(int num_1)
{ 
	cout << "true";
}
void num2(int num_2)
{
	cout << "false";
}