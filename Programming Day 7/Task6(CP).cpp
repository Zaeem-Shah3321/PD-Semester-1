#include <iostream>
using namespace std;
bool prime (int);
int primorial (int);
main (){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    int ans;
    ans = primorial (num);
    cout << ans;
}
bool prime(int number)
{
    for (int x = 2 ; x < number ; x++)
    {
        if (number % x == 0)
        {
           return false;
        }
    }
    return true;
}
int primorial (int numb)
{
    int product = 1;
    int y = 2;
    while (numb != 0)
    {
        if (prime(y))
        {
            product = product * y;
            numb--;
        }
        y++;
    }
    return product;
}