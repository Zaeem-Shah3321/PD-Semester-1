#include <iostream>
#include <conio.h>
using namespace std;
void print_header();
int menu ();
main (){
	system ("cls");
    string name1 = "" , name2 = "" , name3 = "";
    string location1 = "" , location2 = "" , location3 = "";
    int copies1 = 0 , copies2 = 0 , copies3 = 0;
    int available1 = 0 , available2 = 0 , available3 = 0;  
    int option;
    print_header();
    cout << "------------------------------ 1. Librarian." << endl;
    cout << "------------------------------ 2. Student." << endl;
    int op;
    cout << "------------------------------ Enter Your Option.. ";
    cin >> op;
    if (op == 1)
    {
        system ("cls");
        print_header();
    string un;
    cout << "------------------------------ Enter Username.. ";
    cin >> un;
    int pas;
    cout << "------------------------------ Pasword.. ";
    cin >> pas;
    if (un == "zaeem" && pas == 12345)
    {
    while (true)
    {
        system ("cls");
        print_header();
        option = menu ();
        if (option == 1) 
        {
        cout << "------------------------------ Enter The Name Of 1st Book.. ";
        cin >> name1;
        cout << "------------------------------ Enter The Location Of 1st book.. ";
        cin >> location1;
        cout << "------------------------------ Enter The Total Number Of Copies Of 1st book.. ";
        cin >> copies1;
        cout << "------------------------------ Enter The Number Of Copies Available.. ";
        cin >> available1;
        }
        if (option == 2) 
        {
        cout << "------------------------------ Enter The Name Of 2nd Book.. ";
        cin >> name2;
        cout << "------------------------------ Enter The Location Of 2nd Book.. ";
        cin >> location2;
        cout << "------------------------------ Enter The Total Number Of Copies Of 2nd Book.. ";
        cin >> copies2;
        cout << "------------------------------ Enter The Number Of Copies Available.. ";
        cin >> available2;
        }
        if (option == 3) 
        {
        cout << "------------------------------ Enter The Name Of 3rd Book.. ";
        cin >> name3;
        cout << "------------------------------ Enter The Location Of 3rd Book.. ";
        cin >> location3;
        cout << "------------------------------ Enter The Total Number Of Copies Of 3rd Book.. ";
        cin >> copies3;
        cout << "------------------------------ Enter The Number Of Copies Available.. ";
        cin >> available3;
        }
        if (option == 4) 
        {
            system ("cls");
            print_header();
            cout << "------------------------------ All Books Data.." << endl;
            cout << "------------------------------ Name"<< "\t"<<"Location" << "\t" <<  "Total Copies" << "\t" << "Copies Available" << endl;
            cout << "------------------------------ " << name1 << "\t" << location1 << "\t" << "\t" << copies1 << "\t" << "\t" << available1 << endl;
            cout << "------------------------------ " << name2 << "\t" << location2 << "\t" << "\t" << copies2 << "\t" <<"\t" << available2 << endl;
            cout << "------------------------------ " << name3 << "\t" << location3 << "\t" << "\t" << copies3 << "\t" << "\t" << available3 << endl;
        }
        if (option == 5)
        {
            return 0;
        }
        cout << "------------------------------ Press Any Key To Continue.. ";
        getch ();
        system ("cls");
        }
    }
	else 
	{
		cout << "Access Denied";
	} 
    }
    if (op == 2)
    {
        system ("cls");
        print_header();
        int usn;
        cout << "------------------------------ Enter Your Roll Number.. ";
        cin >> usn;
        int pasw;
        cout << "------------------------------ Enter Pasword.. ";
        cin >> pasw;
        if (usn != 0 && pasw !=0)
        {
            string nm;
            cout << "------------------------------ Enter The Name Of The Book You Are Looking For.. ";
            cin >> nm;
            if (nm == name1)
            {
                cout << "------------------------------ Name"<< "\t"<<"Location" << "\t" <<  "Total Copies" << "\t" << "Copies Available" << endl;
                cout << "------------------------------ " << name1 << "\t" << location1 << "\t" << "\t" << copies1 << "\t" << "\t" << available1 << endl;
            }
            if (nm == name2)
            {
                cout << "------------------------------ Name"<< "\t"<<"Location" << "\t" <<  "Total Copies" << "\t" << "Copies Available" << endl;
                cout << "------------------------------ " << name2 << "\t" << location2 << "\t" << "\t" << copies2 << "\t" << "\t" << available2 << endl;
            }
            if (nm == name3)
            {
                cout << "------------------------------ Name"<< "\t"<<"Location" << "\t" <<  "Total Copies" << "\t" << "Copies Available" << endl;
                cout << "------------------------------ " << name3 << "\t" << location3 << "\t" << "\t" << copies3 << "\t" << "\t" << available3 << endl;
            }
        }
    }
}
int menu ()
{
    int option;
    cout << "------------------------------ Select one of The following numbers...." << endl;
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
