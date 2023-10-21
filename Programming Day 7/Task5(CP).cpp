#include <iostream>
using namespace std;
bool isPrime(int);
main (){
    int number;
    cout << "Enter number: ";
    cin >> number;
    int ans;
    ans = isPrime (number);
    cout << ans;
}
bool isPrime(int num)
{
    bool val = true;
    if (num % num == 0 && num/2 != 0 && num/3 != 0)
    {
        val = true;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        val = false;
    }
    return val;
}