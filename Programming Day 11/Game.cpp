#include<iostream>
#include <windows.h>
using namespace std;
void printboard(char[][26]);
void boundary(char[][26]);
void fire(char[][26]);
void moveFire(char[][26], int); 
void removeFire(char[][26]);
void movePlayer(char[][26], char);
void moveEnemy(char [][26], char, char);
bool noWall(char[][26]); 
void moveFire(char [][26]);
int randomMove(int , int);  
main()
{
    char board[20][26] = {"#########################",
                          "#               x       #", 
                          "#     e                 #", 
                          "#                       #", 
                          "#                       #", 
                          "#                       #", 
                          "#                       #", 
                          "#                       #",  
                          "#                       #",  
                          "#                       #",  
                          "#         p             #",  
                          "#                       #",  
                          "#########################"};
    bool bulletfire = false;
    printboard(board);
    while(true)
    {
        if(GetAsyncKeyState(VK_RIGHT))
        {
            movePlayer(board, 'r');
            printboard(board);
        }
        if(GetAsyncKeyState(VK_LEFT))
        {
            movePlayer(board, 'l');
            printboard(board);
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            if(!bulletfire)
            {
                fire(board);    
                printboard(board);       
                bulletfire = true;
            }
        }
        if (bulletfire) 
        {
            if (noWall(board))
            {
                moveFire(board);
                printboard(board);
            }
            else
            {
                bulletfire = false;
                printboard(board);
            }
        }
        int a = randomMove(0 , 1);
        if (a == 0)
        {
            moveEnemy(board, 'e', 'r');
            moveEnemy(board, 'x', 'l');
            printboard(board);
        }
        else
        {
            moveEnemy(board, 'e', 'l');
            moveEnemy(board, 'x', 'r');
            printboard(board);
        }
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
    }
    return 0;
}
int randomMove(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
void boundary(char board[][26])
{
    system("cls");
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0 ; y < 26 ; y++)
        {
            if (board[x][y] == '#' || board[x][y] == ' ')
                cout << board[x][y];
            else
                cout << ' ';
        }
        cout << endl;
    }   
}
void removeFire(char board[][26])
{
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0 ; y < 26 ; y++)
        {
            if (board[x][y] == '.')
            {
                board[x][y] = ' ';
                break;
            }
        }
    }
}
void moveFire(char board[][26], int next)
{
    while(next != 0)
    {
        for (int x = 0 ; x < 20 ; x++)
        {
            for (int y = 0 ; y < 26 ; y++)
            {
                if (board[x][y] == '.')
                {
                    board[x][y] = ' ';
                    board[x - 1][y] = '.';
                }
            }
        }
        next--;    
    }
}
void movePlayer(char board[][26], char location)
{
   for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0; y < 26; y++)
        {
            if (board[x][y] == 'p')
            {
                if (location == 'r')  
                {
                    if (y + 1 < 26 && board[x][y + 1] == ' ') 
                    {
                        board[x][y] = ' ';
                        board[x][y + 1] = 'p';
                        break;
                    }
                }
                else if (location == 'l')  
                {
                    if (board[x][y - 1] == ' ')
                    {
                        board[x][y] = ' ';
                        board[x][y - 1] = 'p';
                        break;
                    }  
                }
            }

        }
    }
}
void moveFire(char board[][26])
{
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0 ; y < 26 ; y++)
        {
            if (board[x][y] == '.')
            {
                board[x][y] = ' ';
                board[x - 1][y] = '.';
            }
        }
    }
}
void fire(char board[][26])
{
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0 ; y < 26 ; y++)
        {
            if (board[x][y] == 'p')
            {
                board[x - 1][y] = '.';
            }
        }
    }
}
void printboard(char board[][26])
{
    string buffer = "";
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0; y < 26; y++)
        {
            buffer += board[x][y];    
        }
        buffer += "\n";
    }
    system("cls");
    cout << buffer;         
}
bool noWall(char game[][26])
{
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0 ; y < 26 ; y++)
        {
            if (game[x][y] == '.' && game[x - 1][y] == '#')
            {
                game[x][y] = ' '; 
                return false; 
            }
        }
    }
    return true;
}
void moveEnemy(char board[][26], char enemyType, char move)
{
    for (int x = 0 ; x < 20 ; x++)
    {
        for (int y = 0; y < 26; y++)
        {
            if (board[x][y] == enemyType)
            {
                if (move == 'r') 
                {
                    if (board[x][y] == enemyType && board[x][y + 1] == ' ') 
                    {
                        board[x][y] = ' ';
                        board[x][y + 1] = enemyType;
                        break;
                    }
                }
                else if (move == 'l')  
                {
                    if (board[x][y - 1] == ' ' && board[x][y - 1] != '#')
                    {
                        board[x][y] = ' ';
                        board[x][y-1] = enemyType;
                        break;
                    }  
                }
            }
        }
    }
}
