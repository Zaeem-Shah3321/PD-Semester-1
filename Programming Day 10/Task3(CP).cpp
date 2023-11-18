#include <iostream>
using namespace std;
main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int elements[length];
    cout << "Enter the elements of the array:" << endl;
    for(int x = 0 ; x < length ; x++)
    {
        cin >> elements[x];
    }
    int cycle;
    cout << "Enter the length of the cycle: ";
    cin >> cycle;
    int counter = 0;
    for (int y = 0 ; y < cycle ; y++)
    {
        if (elements[y] == elements[y + cycle])
        {
            counter++;
        }
    } 
    if (counter == 0)
    cout << "Output: 0";
    if (counter >= 1)
    {
        cout << "Output: 1";
    }
    if(cycle > length)
    {
       cout << "Output: 1"; 
    }
}