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
    for (int rows = rowSize ; rows >= 1 ; rows--)
    {
        for (int col = rows ; col >= 1 ; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}