#include <iostream>
using namespace std;
main ()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    string elements[length];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    int count = 0;
    int ans = 0;
    int right = 90;
    int left = 90;
    for (int x = 0 ; x < length ; x++)
    {
        cin >> elements[x];
    if (elements[x] == "right")
        {
            count = count + 90;
        }
    if (elements[x] == "left")
        {
            count = count - 90;
        }
    }    
    if (count >= 360)
        {
            ans = count / 360;
            cout << "Number of full rotations: " << ans;
        }
    if (count < 360)
        {
            cout << "Number of full rotations: 0";
        }
}