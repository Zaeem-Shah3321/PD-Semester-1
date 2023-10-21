#include <iostream>
using namespace std;
float calculateFruitPrice(string , string , double);
main (){
    string name;
    cout << "Enter the fruit name: ";
    cin >> name;
    string day;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    double quantity;
    cout << "Enter the quantity: ";
    cin >> quantity;
    float ans;
    ans = calculateFruitPrice(name,day,quantity);
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday" || day == "Sunday")
    {
        cout << ans;
    }
    if (day != "Monday" && day != "Tuesday" && day != "Wednesday" && day != "Thursday" && day != "Friday" && day != "Saturday" && day != "Sunday")
    {
        cout << "error";
    }
}
float calculateFruitPrice(string names, string days , double quantities)
{     
    if (days == "Sunday" || days == "Saturday")
    {
        float finalRate;
        if (names == "banana")
        {
            finalRate = quantities * 2.70;
        }
        else if (names == "apple")
        {
            finalRate = quantities * 1.25;
        }
        else if (names == "orange")
        {
            finalRate = quantities * 0.90;
        }
        else if (names == "grapefruit")
        {
            finalRate = quantities * 1.60;
        }
        else if (names == "kiwi")
        {
            finalRate = quantities * 3.00;
        }
        else if (names == "pineapple")
        {
            finalRate = quantities * 5.60;
        }
        else if (names == "grapes")
        {
            finalRate = quantities * 4.20;
        }
        return finalRate;
    }
    else
    {
        float finalRate_2;
        if (names == "banana")
        {
            finalRate_2 = quantities * 2.50;
        }
        else if (names == "apple")
        {
            finalRate_2 = quantities * 1.20;
        }
        else if (names == "orange")
        {
            finalRate_2 = quantities * 0.85;
        }
        else if (names == "grapefruit")
        {
            finalRate_2 = quantities * 1.45;
        }
        else if (names == "kiwi")
        {
            finalRate_2 = quantities * 2.70;
        }
        else if (names == "pineapple")
        {
            finalRate_2 = quantities * 5.50;
        }
        else if (names == "grapes")
        {
            finalRate_2 = quantities * 3.85;
        }
        return finalRate_2;
    }
}