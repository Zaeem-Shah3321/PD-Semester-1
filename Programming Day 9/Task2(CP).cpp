#include <iostream> 
using namespace std;
string containsSeven(int arr[] , int);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    int num = 0;
    for (int x = 0 ; x < size ; x++ )
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> num; 
        arr[x] = num;
    }
    string ans;
    ans = containsSeven(arr,size);
    cout << ans;
}
string containsSeven(int arr[] , int size)
{
    string result = "there is no 7 int the array";
    bool isFound = false;
    int number = 0;
    int  digit = 0;
    for (int y = 0 ; y < size ; y++)
    {
        if (!isFound)
        {
            number = arr[y];
            while (number != 0)
            {
                digit = number % 10;
                if (digit == 7)
                {
                    result = "Boom!";
                    isFound = true;
                    break;
                }
            number = number /10;
            }
        }
    }  
    return result;
}
