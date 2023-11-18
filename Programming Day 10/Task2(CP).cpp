#include <iostream> 
using namespace std;
main ()
{
    int wordCount;
    int x;
    cout << "Enter how many words you want to enter: ";
    cin >> wordCount;
    string words[wordCount];
    for( x = 0 ; x < wordCount ; x++)
    {
        cout << "Enter word " << x + 1 << ": " ;
        cin >> words[x];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    string let;
    int counter = 0;
    for (int y = 0 ; y < x ; y++)
    {
        let = words[y];
        for(int z = 0 ; let[z] != '\0' ; z++)
        {
            if (letter == let[z])
            {
                counter++;
            }
        }
    }
    cout << letter << " shows up " << counter << " times in the data.";
}