#include <iostream>
using namespace std;
float volume(float length , float width , float height , string unit);
main (){
    float len;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> len;
    float wid;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> wid;
    float hei;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> hei;
    string unit ;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    float ans;
    ans = volume (len,wid,hei,unit);
    cout << "The volume of the pyramid is: " << ans << " cubic " << unit;
}
float volume (float length , float width , float height , string unit)
{
    float vol;
    vol = (length * width * height) / 3; 
    if (unit == "meters")
    {
        float vol_m;
        vol_m = vol;
        return vol_m;
    }
    if (unit == "millimeters")
    {
        float vol_mm;
        vol_mm = vol * 1e+9;
        return vol_mm;
    }
    if (unit == "centimeters")
    {
        float vol_cm;
        vol_cm = vol * 1000000;
        return vol_cm;
    }
    if (unit == "kilometers")
    {
        float vol_km;
        vol_km = vol  * 1e-9;
        return vol_km;
    }
}