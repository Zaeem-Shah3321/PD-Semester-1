#include <iostream>
using namespace std;
main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array:" << endl;
    int elements[length];
    for (int x = 0; x < length; x++)
    {
        cin >> elements[x];
    }
    int a[length];
    int min = 0;
    for (int x = 0; x < length; x++) 
    {
        int smallest = x;  
        for (int y = x + 1; y < length; y++) 
        {
            if (elements[y] < elements[smallest])
                smallest = y;
        }
        int b = elements[x];        
        elements[x] = elements[smallest];     
        elements[smallest] = b;       
    } 
    bool check = true;
    for (int x = 0; x < length - 1; x++)
    {
        if (elements[x] != (elements[x + 1] - 1))
            check = false;
    }
    cout << "Can be arranged: " << check;
}
