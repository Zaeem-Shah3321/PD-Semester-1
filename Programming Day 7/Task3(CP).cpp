#include <iostream> 
using namespace std;
void amplify (int);
main (){
    int seq;
    cout << "Enter the number to Amplify: ";
    cin >> seq;
    amplify (seq);
}
void amplify (int num)
{
    for (int r = 1 ; r <= num ; r++)
    {
        if (r % 4 == 0)
        {
            cout << r * 10 ;
        }
        else 
        {
            cout << r;
        }
        if (r < num)
        {
            cout << ", ";
        }
    }
}
