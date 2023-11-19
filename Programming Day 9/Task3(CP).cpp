#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    string element[size];
    int counter = 0;
    for (int x = 0 ; x < size ; x++)
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> element[x];
    }   
    for (int x = 0 ; x < size ; x++)
    { 
        if (element[0] == element[x])
        {
            counter++;
        }
    }
       if (counter == size)
       {
        cout << true;
       }
       else 
       {
        cout << false;
       }
}