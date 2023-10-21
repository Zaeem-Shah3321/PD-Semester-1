#include <iostream>
using namespace std;
string calculateApartmentPrices(string, int);
string calculateStudioPrices(string, int);
main (){
    string month;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    float stay;
    cout << "Enter the number of stays: ";
    cin >> stay;
    string apartmentPrice;
    apartmentPrice =  calculateApartmentPrices(month,stay);
    cout << "Apartment: " << apartmentPrice << "$." << endl;
    string studioPrice;
    studioPrice = calculateStudioPrices(month,stay);
    cout << "Studio: " << studioPrice << "$." ;
}
string calculateApartmentPrices(string month_2 , int stay_2)
{   float charges;
    float finalPrice; 
    if ((month_2 == "May" || month_2 == "October") && stay_2 > 14)
    {
        charges = (stay_2 * 65);
        finalPrice = charges - (charges * 0.1);
        return to_string(finalPrice); 
    }
    else if ((month_2 == "May" || month_2 == "October") && stay_2 <= 14)
    {
        charges = (stay_2 * 65);
        return to_string(charges); 
    }
    else if ((month_2 == "June" || month_2 == "September") && stay_2 > 14)
    {
        charges = (stay_2 * 68.7);
        finalPrice = charges - (charges * 0.1);
        return to_string(finalPrice); 
    }
    else if ((month_2 == "June" || month_2 == "September") && stay_2 <= 14)
    {
        charges = (stay_2 * 68.7);
        return to_string(charges); 
    }
    else if ((month_2 == "July" || month_2 == "August") && stay_2 > 14)
    {
        charges = (stay_2 * 77);
        finalPrice = charges - (charges * 0.1);
        return to_string(finalPrice); 
    }
    else if ((month_2 == "July" || month_2 == "August") && stay_2 <= 14)
    {
        charges = (stay_2 * 77);
        return to_string(charges); 
    }
}
string calculateStudioPrices(string month_1, int stay_1)
{
    float charges_1;
    float finalPrice_1;
    if ((month_1 == "May" || month_1 == "October") && (stay_1 > 7 && stay_1 <= 14))
    {
        charges_1 = (stay_1 * 50);
        finalPrice_1 = charges_1 - (charges_1 * 0.05);
        return to_string(finalPrice_1);
    }
    else if ((month_1 == "May" || month_1 == "October") && stay_1 <= 7)
    {
        charges_1 = (stay_1 * 50);
        return to_string(charges_1);
    }
    else if ((month_1 == "May" || month_1 == "October") && stay_1 > 14)
    {
        charges_1 = (stay_1 * 50);
        finalPrice_1 = charges_1 - (charges_1 * 0.3);
        return to_string(finalPrice_1);
    }
    else if ((month_1 == "May" || month_1 == "October") && (stay_1 > 7 && stay_1 <=14))
    {
        charges_1 = (stay_1 * 50);
        return to_string(charges_1);
    }
    else if ((month_1 == "June" || month_1 == "September") && stay_1 > 14)
    {
        charges_1 = (stay_1 * 75.20);
        finalPrice_1 = charges_1 - (charges_1 * 0.20);
        return to_string(finalPrice_1);
    }
    else if ((month_1 == "June" || month_1 == "September") && stay_1 <=14)
    {
        charges_1 = (stay_1 * 75.20);
        return to_string(charges_1);
    }
    else if ((month_1 == "July" || month_1 == "August"))
    {
        charges_1 = (stay_1 * 76);
        return to_string(charges_1);
    }
}