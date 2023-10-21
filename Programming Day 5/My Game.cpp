#include <iostream> 
#include <windows.h>
using namespace std;
void gotoxy (int x , int y);
char getCharAtxy(short int x, short int y);
void print_enemy_1();
void erase_enemy_1();
void print_enemy_2();
void erase_enemy_2();
string changeDirection_1(string);
string changeDirection_2(string);
void print_player();
void erase_player();
void move_player_left();
void move_player_right();
void move_player_up ();
void move_player_down ();
void move_enemy_1(string);
void move_enemy_2(string);
void print_maze();

int eX1 = 15 , eY1 = 1;
int eX2 = 100, eY2 = 10;
int pX = 1 , pY = 24;
int bonus = 0;
main ()
{
    system ("cls");
    print_maze ();
    print_enemy_1 ();
    print_enemy_2 ();
    print_player ();
    string enemyDirection_1 = "right";
    string enemyDirection_2 = "down";
        while(true)
        {
        if (GetAsyncKeyState(VK_LEFT))
        {
            move_player_left();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            move_player_right();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            move_player_up();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            move_player_down();
        }
        gotoxy (10,30);
        cout << "Bonus: " << bonus;
        move_enemy_1(enemyDirection_1);
        enemyDirection_1 = changeDirection_1(enemyDirection_1);
        Sleep (25);
        move_enemy_2(enemyDirection_2);
        enemyDirection_2 = changeDirection_2(enemyDirection_2);
        Sleep (25);
        }
        return 0;
    }
void gotoxy (int x , int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy (short int x , short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
    : ' ';
}
void print_maze ()
{
    cout << "########################################################################################################################" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                       $                                                               ################" << endl;
    cout << "#                                                                                                         ##############" << endl;
    cout << "#                                    $                                                                     #############" << endl;
    cout << "#######################                                                                                                #" << endl;
    cout << "######################                                                                                                 #" << endl;
    cout << "#####################                              ###################                                                 #" << endl;
    cout << "####################                               @@@@@@@@@@@@@@@@@@@                                                 #" << endl;
    cout << "#                                                  ###################                                                 #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                      $                                                                                               #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                                                                                                                      #" << endl;
    cout << "#                     # # # #                     # # # #                     # # # #                                  #" << endl;
    cout << "#                     #     #                     #     #                     #     #                                  #" << endl;
    cout << "#                     #     #                     #     #                     #     #                                  #" << endl;
    cout << "########################################################################################################################" << endl;
}
void print_enemy_1 ()
{
    gotoxy (eX1 , eY1);
    cout << "   ||||   " << endl;
    gotoxy (eX1 , eY1 + 1);
    cout << "  /    \\ " << endl;
    gotoxy (eX1 , eY1 + 2);
    cout << " ( O  O ) " << endl;
    gotoxy (eX1 , eY1 + 3);
    cout << "  \\    /  " << endl;
    gotoxy (eX1 , eY1 + 4);
    cout << "   \\__/   " << endl;
} 
void erase_enemy_1 ()
{
    gotoxy (eX1 , eY1);
    cout << "          " << endl;
     gotoxy (eX1 , eY1 + 1);
    cout << "          " << endl;
    gotoxy (eX1 , eY1 + 2);
    cout << "          " << endl;
    gotoxy (eX1 , eY1 + 3);
    cout << "           " << endl;
    gotoxy (eX1 , eY1 + 4);
    cout << "           " << endl;
}
string changeDirection_1(string direction)
{

    if (direction == "right" && eX1 >= 100)
    {
        direction = "left";
    }
    if (direction == "left" && eX1 <= 2)
    {
        direction = "right";
    }
    return direction;
}
string changeDirection_2(string direction)
{

    if (direction == "down" && eY2 >= 20)
    {
        direction = "up";
    }
    if (direction == "up" && eY2 <= 10)
    {
        direction = "down";
    }
    return direction;
}
void move_enemy_1 (string direction)
{
    erase_enemy_1();
    if (direction == "right")
    {
        eX1 = eX1 + 1;
    }
    if (direction == "left")
    {
        eX1 = eX1 - 1;
    }
    print_enemy_1();
}
void move_enemy_2 (string direction)
{
    erase_enemy_2();
    if (direction == "down")
    {
        eY2 = eY2 + 1;
    }
    if (direction == "up")
    {
        eY2 = eY2 - 1;
    }
    print_enemy_2();
}
void print_enemy_2()
{
    gotoxy (eX2 , eY2);
    cout << " __/\\_  " << endl;
    gotoxy (eX2 , eY2 + 1);
    cout << "/o))))\\/" << endl; 
    gotoxy (eX2 , eY2 + 2);
    cout << "\\o))))/\\" << endl;
    gotoxy (eX2  , eY2 + 3);
    cout << " --\\/-   ";
}
void erase_enemy_2()
{
    gotoxy (eX2 , eY2);
    cout << "         " << endl;
    gotoxy (eX2 , eY2 + 1);
    cout << "         " << endl; 
    gotoxy (eX2  , eY2 + 2);
    cout << "         " << endl;
    gotoxy (eX2  , eY2 + 3);
    cout << "          " << endl ;
}
void move_enemy_2()
{
    erase_enemy_2();
    eY2 = eY2 + 1;
    if (eY2 == 20)
    {
        eY2 = 10;
    }
    print_enemy_2();
}
void erase_player ()
{
    gotoxy (pX , pY - 7);
    cout << "           " << endl;
    gotoxy (pX , pY - 6);
    cout << "           " << endl;
    gotoxy (pX , pY - 5);
    cout << "           " << endl;
    gotoxy (pX , pY - 4);
    cout << "           " << endl;
    gotoxy (pX , pY - 3);
    cout << "           " << endl;
    gotoxy (pX , pY - 2);
    cout << "           " << endl;
    gotoxy (pX , pY - 1);
    cout << "           " << endl;
}
void print_player ()
{ 
    gotoxy (pX , pY - 7);
    cout << "  ******** " << endl;
    gotoxy (pX , pY - 6);
    cout << "  *      * " << endl;
    gotoxy (pX , pY - 5);
    cout << "***    ****" << endl;
    gotoxy (pX , pY - 4);
    cout << "* *    ****" << endl;
    gotoxy (pX , pY - 3 );
    cout << "* *      * " << endl;
    gotoxy (pX , pY - 2);
    cout << "***  **  * " << endl;
    gotoxy (pX , pY - 1 );
    cout << "  ***  *** " << endl;
}
void move_player_left() 
{
     if (getCharAtxy(pX - 1 , pY) == '$'  || getCharAtxy(pX - 1 , pY-1) == '$' || getCharAtxy(pX - 1, pY-2) == '$'||getCharAtxy(pX - 1, pY-3) == '$'||getCharAtxy(pX -1 , pY-4) == '$'||getCharAtxy(pX  - 1, pY-5) == '$'||getCharAtxy(pX - 1, pY-6) == '$')
    {
    erase_player();
    bonus = bonus + 1;
    pX = pX + 1 ;
    print_player();
    } 
    if (getCharAtxy(pX - 1 , pY) == ' ')
    {
    erase_player();
    pX = pX - 1 ;
    print_player();
    }
}
void move_player_right()
{
    if (getCharAtxy(pX + 11, pY) == '$'  || getCharAtxy(pX + 11, pY-1) == '$' || getCharAtxy(pX + 11, pY-2) == '$'||getCharAtxy(pX + 11, pY-3) == '$'||getCharAtxy(pX + 11, pY-4) == '$'||getCharAtxy(pX + 11, pY-5) == '$'||getCharAtxy(pX + 11, pY-6) == '$')
    {
    erase_player();
    bonus = bonus + 1;
    pX = pX + 1 ;
    print_player();
    } 
    if (getCharAtxy(pX + 11, pY) == ' ')
    {
    erase_player();
    pX = pX + 1 ;
    print_player();
    } 
}
void move_player_up() 
{
    if (getCharAtxy(pX  , pY - 8) == ' ')
    {
    erase_player();
    pY = pY - 1 ;
    print_player();
    }
}
void move_player_down()
{
    if (getCharAtxy(pX , pY  ) == ' ')
    {
    erase_player();
    pY = pY + 1 ;
    print_player();
    }
}



    
  