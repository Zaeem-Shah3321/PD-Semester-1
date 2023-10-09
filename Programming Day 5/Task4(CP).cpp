#include <iostream>
using namespace std;
void time (int hours , int days , int workers);
main (){
    int hou;
    cout << "Enter the needed hours: ";
    cin >> hou;
    int day;
    cout << "Enter the days that the firm has: ";
    cin >> day;
    int worker;
    cout << "Enter the numnber of workers: ";
    cin >> worker;
    time (hou , day , worker); 
}
void time (int hours , int days , int workers)
{ 
    int total_time;
    total_time = (days * 9) * workers;
    if (total_time >= hours)
    {
        cout << "Yes!" << total_time - hours << " hours left.";
    }
    if (total_time < hours )
    {
        cout << "Not enough time! " << hours - total_time << " hours needed.";
    }
}