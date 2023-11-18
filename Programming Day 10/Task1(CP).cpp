#include <iostream>
using namespace std;
main ()
{
    int saturdays;
    cout << "Enter the number of Saturdays: ";
    cin >> saturdays;
    int miles[saturdays];
    int counter = 0;
    for (int x = 0 ; x < saturdays ; x++)
    {
        cout << "Enter miles run for Saturday " << x + 1 << ": " ;
        cin >> miles[x];
        if(miles[x] > miles[x - 1])
        {
            counter ++;
        }
    }
    
    cout << "Total progress days: " << counter ;
}