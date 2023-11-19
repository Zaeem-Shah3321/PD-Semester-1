#include <iostream>
using namespace std;
string reverseWords(string);
main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin,line);
    cout << "Reversed  string: " << reverseWords(line);
}
string reverseWords(string lines)
{
    string ans = "";
    int x = 0;
    int wordPosition = 0;
    string words[1000]; 
    string singleWord = "";
    while(x < lines.length())
    {
        if(lines[x] != ' ')
            singleWord += lines[x];
        else
        {
            words[wordPosition] = singleWord;
            wordPosition ++;
            singleWord = ""; 
        }
        x++;
    }
    words[wordPosition] = singleWord; 
    for(int x = wordPosition ; x >= 0 ; x--)           
        ans += words[x] + " "; 
    return ans;
}
