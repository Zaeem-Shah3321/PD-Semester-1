#include <iostream>
using namespace std;
string activity (string , string);
main (){
    string temperature;
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    string humidity;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    string ans;
    ans = activity(temperature , humidity);
    cout << "Recommended activity: " << ans;
}
string activity(string temp , string hum)
{
    if (temp == "warm" && hum == "dry")
    {
        return "Play tennis";
    }
    if (temp == "warm" && hum == "humid")
    {
        return "Swim";
    }
    if (temp == "cold" && hum == "dry")
    {
        return "Play basketball";
    }
    if (temp == "cold" && hum == "humid")
    {
        return "Watch TV";
    }
}