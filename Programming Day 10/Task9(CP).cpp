#include <iostream>
using namespace std;
main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int elements[length];
    cout << "Enter the elements of the array: " << endl;
    int counter = 0;
    for (int x = 0 ; x < length; x++)
    {
        cin >> elements[x];
        if (elements[x] != 0)
        {
            counter++;
        }
    }
    if (counter == 0)
    {
        cout << "Special value: -1";
    }
    else
    {
        cout << "Special value: " << counter;
    }
}
