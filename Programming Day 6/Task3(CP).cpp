#include <iostream>
using namespace std;
string findZodiacSign(int, string);
main () {
    int day;
    cout << "Enter the day of birth: ";
    cin >> day;
    string month;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    string sign;
    sign = findZodiacSign (day, month);
    cout << "Zodiac Sign: " << sign;
}
string findZodiacSign(int days , string months)
{
    if ((months == "March" && days >= 21 && days <= 31) || (months == "April" && days >= 1 && days <= 19))
    {
        return "Aries";
    }
    if ((months == "April" && days >=20 && days <= 30) || (months == "May" && days >=1 && days <=20))
    {
        return "Taurus";
    }
    if ((months == "May" && days >= 21 && days <= 31) || (months == "June" && days >= 1 && days <= 20))
    {
        return "Gemini";
    }
    if ((months == "June" && days >= 21 && days <= 30) || (months == "July" && days >= 1 && days <= 22))
    {
        return "Cancer";
    }
    if ((months == "July" && days >= 23 && days <= 31) || (months == "August" && days >= 1 && days <= 22))
    {
        return "Leo";
    }
    if ((months == "August" && days >= 23 && days <= 31) || (months == "September" && days >= 1 && days <= 22))
    {
        return "Virgo";
    }
    if ((months == "September" && days >= 23 && days <= 30) || (months == "October" && days >= 1 && days <= 22))
    {
        return "Libra";
    }
    if ((months == "October" && days >= 23 && days <= 31) || (months == "November" && days >= 1 && days <= 21))
    {
        return "Scorpio";
    }
    if ((months == "November" && days >= 22 && days <= 30) || (months == "December" && days >= 1 && days <= 21))
    {
        return "Sagittarius";
    }
    if ((months == "December" && days >= 22 && days <= 31) || (months == "January" && days >= 1 && days <= 19))
    {
        return "Capricon";
    }
    if ((months == "January" && days >= 20 && days <= 31) || (months == "February" && days >= 1 && days <= 18))
    {
        return "Aquarius";
    }
}