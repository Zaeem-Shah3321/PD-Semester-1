#include <iostream>
using namespace std;
void evenOddTransformation(int[],int,int);
main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int element[size];
    for (int x = 0 ; x < size ; x++)
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> element[x];
    }
    int times;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> times;
    evenOddTransformation(element,size,times);
}
void evenOddTransformation(int elements[] ,int sizes, int time)    
{
    while (time != 0)
    {
        for (int x = 0 ; x < sizes ; x++)
        {
            if (elements[x] % 2 == 0)
            {
                elements[x] = elements[x] - 2;
            }
            if (elements[x] % 2 != 0)
            {
                elements[x] = elements[x] + 2;
            }
        }
        time--;
    }
    string ans = "[";
    for (int x = 0 ; x < sizes ; x++)
    {
        if (x == sizes - 1)
        {
            ans += to_string(elements[x]);
        }
        else 
        {
             ans += to_string(elements[x]) + ", ";
        }
    }
    ans += "]";
    cout << ans;
}