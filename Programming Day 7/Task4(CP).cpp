#include <iostream>
using namespace std;   
int dot (int);
main (){
    int triangle;
    cout << "Enter number of Triangle: ";
    cin >> triangle;
    int ans;
    ans = dot (triangle);
    cout << "Dots in the Triangle: " << ans; 
}
int dot (int dots)
{
    int sum = 0;
    for (int w = 1; w <= dots ; w++)
    {
        sum = sum + w;
    }
    return sum;
}