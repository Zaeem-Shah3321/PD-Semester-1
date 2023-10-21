#include <iostream>
using namespace std;
string type(char);
float duePre (char,char,int);
float dueReg (char,int);
main (){
    char code;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    if (code == 'P' || code == 'p')
    {
    char time;
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> time;
    float min;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    string type_1;
    type_1 = type (code);
    cout << "Service Type: " << type_1 << endl;
    cout << "Total Minutes Used: " << min << " minutes" << endl;
    float amount;
    amount = duePre (code , time , min);
    cout << "Amount Due: $" << amount;
    }
    if (code == 'R' || code == 'r') 
    {
    float min;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    string type_1;
    type_1 = type (code);
    cout << "Service Type: " << type_1 << endl;
    cout << "Total Minutes Used: " << min << " minutes" << endl;
    float amount;
    amount = dueReg(code , min);
    cout << "Amount Due: $" << amount; 
    } 
}
string type(char code_1)
{
    if (code_1 == 'P' || code_1 == 'p')
    {
        return "Premium";
    }
    if (code_1 == 'R' || code_1 == 'r')
    {
        return "Regular";
    }
} 
float duePre (char code_2 , char time_1 , int minu)
{   float premimunCharges = 25;
    float totalCharges;
    if (((code_2 == 'P' || code_2 == 'p') && (time_1 == 'D' || time_1 == 'd')) && minu <= 75 )
    {
        return premimunCharges;
    }
    if (((code_2 == 'P' || code_2 == 'p') && (time_1 == 'D' || time_1 == 'd')) && minu > 75 )
    {
        totalCharges = premimunCharges + ((minu - 75) * 0.10);
        return totalCharges;
    }
    if (((code_2 == 'P' || code_2 == 'p') && (time_1 == 'N' || time_1 == 'n')) && minu <= 100 )
    {
        return premimunCharges;
    }
    if (((code_2 == 'P' || code_2 == 'p') && (time_1 == 'N' || time_1 == 'n')) && minu > 100)
    {
        totalCharges = premimunCharges + ((minu - 100) * 0.05);
        return totalCharges;
    }
}
float dueReg (char code_3 , int minut)
{
    float regularCharges = 10;
    float totalCharges;
     if ((code_3 == 'R' || code_3 == 'r') && minut <= 50 )
    {
        return regularCharges;
    }
    if ((code_3 == 'R' || code_3 == 'r') && minut > 50 )
    {
        totalCharges = regularCharges + ((minut - 50) * 0.20);
        return totalCharges;
    }
}