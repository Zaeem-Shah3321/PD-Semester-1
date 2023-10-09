#include <iostream>
#include <conio.h>
using namespace std;
void print_header();
int menu ();
main (){
    string name1 = "" , name2 = "" , name3 = "";
    string location1 = "" , location2 = "" , location3 = "";
    int copies1 = 0 , copies2 = 0 , copies3 = 0;
    int available1 = 0 , available2 = 0 , available3 = 0;  
    int option;
    while (true)
    {
        print_header();
        option = menu ();
        if (option == 1) 
        {
        cout << "------------------------------ Enter the name of 1st Book.. ";
        cin >> name1;
        cout << "------------------------------ Enter the location of 1st book.. ";
        cin >> location1;
        cout << "------------------------------ Enter the total number of copies of 1st book..";
        cin >> copies1;
        cout << "------------------------------ Enter the number of copies available..";
        cin >> available1;
        }
        if (option == 2) 
        {
        cout << "------------------------------ Enter the name of 2nd Book.. ";
        cin >> name2;
        cout << "------------------------------ Enter the location of 2nd Book.. ";
        cin >> location2;
        cout << "------------------------------ Enter the total number of copies of 2nd Book..";
        cin >> copies2;
        cout << "------------------------------ Enter the number of copies available..";
        cin >> available2;
        }
        if (option == 3) 
        {
        cout << "------------------------------ Enter the name of 3rd Book.. ";
        cin >> name3;
        cout << "------------------------------ Enter the location of 3rd Book.. ";
        cin >> location3;
        cout << "------------------------------ Enter the total number of copies of 3rd Book..";
        cin >> copies3;
        cout << "------------------------------ Enter the number of copies available..";
        cin >> available3;
        }
        if (option == 4) 
        {
            system ("cls");
            print_header();
            cout << "------------------------------ All books data.." << endl;
            cout << "------------------------------ Name"<< "\t"<<"Location" << "\t" <<  "Total Copies" << "\t" << "Copies Available" << endl;
            cout << "------------------------------ " << name1 << "\t" << location1 << "\t" << "\t" << copies1 << "\t" << "\t" << available1 << endl;
            cout << "------------------------------ " << name2 << "\t" << location2 << "\t" << "\t" << copies2 << "\t" <<"\t" << available2 << endl;
            cout << "------------------------------ " << name3 << "\t" << location3 << "\t" << "\t" << copies3 << "\t" << "\t" << available3 << endl;
        }
        if (option == 5)
        {
            return 0;
        }
        cout << "------------------------------ Press any key to continue...";
        getch ();
        system ("cls");
        }
}
int menu ()
{
    int option;
    cout << "------------------------------ Select one of the following numbers...." << endl;
    cout << "------------------------------ 1. Add First Book Data.." << endl ; 
    cout << "------------------------------ 2. Add Second Book Data.." << endl ; 
    cout << "------------------------------ 3. Add Third Book Data.." << endl ; 
    cout << "------------------------------ 4. View All Books.. " << endl;
    cout << "------------------------------ 5. Exit.." << endl;
    cout << "------------------------------ Your Option..";
    cin >> option;
    return option; 
}   

void print_header()
{
    cout << "=================================================================================================================================================     " << endl;
	cout << "|  ####     #### ######   #######    ####  #######  ##    ##     ####   ####  ####  ###  ##  ####     ######   ####   #### ##### ###  ## ###### |     " << endl;
	cout << "|   ##       ##  ##   ##  ##    ##  ##  ## ##    ##  ##  ##      ## ## ## ## ##  ## #### ## ##  ##   ##        ## ## ## ## ##    #### ##   ##   |     " << endl;
	cout << "|   ##       ##  ######   ##    ##  ##  ## ##    ##   ####       ##  ###  ## ##  ## ####### ##  ##  ##         ##  ###  ## ####  #######   ##   |     " << endl;
	cout << "|   ##       ##  ##    ## ######    ###### ######      ##        ##   #   ## ###### ## #### ###### ##     #### ##   #   ## ##    ## ####   ##   |     " << endl;
	cout << "|   ##   ##  ##  ##    ## ##    ##  ##  ## ##    ##    ##        ##       ## ##  ## ##  ### ##  ##  ##     ##  ##       ## ##    ##  ###   ##   |     " << endl;
	cout << "|  ######## #### #######  ##     ## ##  ## ##     ##   ##        ##       ## ##  ## ##   ## ##  ##   #######   ##       ## ##### ##   ##   ##   |     " << endl;
	cout << "|                                                                                                                                               |     " << endl;
	cout << "|                                                ##### ##    ## ##### ###### ##### ####    ####                                                 |     " << endl;
	cout << "|                                               ##      ##  ## ##       ##   ##    ## ##  ## ##                                                 |     " << endl;
	cout << "|                                                #####   ####   #####   ##   ####  ##   ###  ##                                                 |     " << endl;
	cout << "|                                                    ##   ##        ##  ##   ##    ##    #   ##                                                 |     " << endl;
	cout << "|                                                    ##   ##        ##  ##   ##    ##        ##                                                 |     " << endl;
	cout << "|                                                #####    ##    #####   ##   ##### ##        ##                                                 |     " << endl;
	cout << "|================================================================================================================================================     " << endl;
}
