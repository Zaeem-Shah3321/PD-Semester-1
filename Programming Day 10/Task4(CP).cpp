#include <iostream>
using namespace std;
main()
{
    int box;
    cout << "Enter the number of boxes: ";
    cin >> box;
    int dim[box * 3];
    cout << "Enter the dimensions of the boxes (length, width, height): " << endl;
    for (int x = 0 ; x < (box * 3) ; x++)
    {
        cin >> dim[x];
    }    
    int volume = 0;
    int product = 1;
    for (int y = 0 ; y < (box * 3) ; y++)
    {
        product *= dim[y];
        if ((y + 1) % 3 == 0)
        {
            volume += product;
            product = 1;
        }
    }
    cout << "Total volume of all boxes: " << volume;
}