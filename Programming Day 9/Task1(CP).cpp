#include <iostream>
using namespace std;
int isLengthEven(string);
main ()
{
    string name;
    cout << "Enter a String: ";
    cin >> name;
    int ans;
    ans = isLengthEven(name);
    cout << ans;
}
int isLengthEven(string names)
{
    int counter = 0;
    for (int x = 0 ; names[x] != '\0' ; x++ )
    {
        counter++;
    }
    if (counter % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}