#include <iostream>
using namespace std;
void stars (int);
main (){
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    stars(rows);
}
void stars (int rowSize)
{
    for (int rows = 1 ; rows <= rowSize ; rows++)
    {
        for (int col = 1 ; col <= rows ; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}