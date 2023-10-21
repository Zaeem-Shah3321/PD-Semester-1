#include <iostream>
using namespace std;
void starsUpper (int);
void starsLower (int);
main (){
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    starsUpper(rows/2);
    starsLower(rows/2);
}
void starsUpper(int rowSize)
{
    for (int rows = 1 ; rows <= rowSize ; rows++)
    {
        for (int col = 1 ; col <= rowSize - rows ; col++)
        {
            cout << " ";
        }
        for (int k = 1; k <= rows ; k++)
        {
            cout << "*";
        } 
        cout << endl;
    }
}
void starsLower (int rowSize)
{   
    for (int rows = 1 ; rows <= rowSize ; rows++)
    {
        for (int col = 1 ; col < rows ; col++)
        {
            cout << " ";
        }
        for (int k = rows; k <= rowSize ; k++)
        {
            cout << "*";
        } 
        cout << endl;
    }
}