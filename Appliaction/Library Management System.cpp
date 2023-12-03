#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;    
void printHeader ();
void siginHeader();
void adminsignupHeader();
void adminSignInHeader();
void signupHeader();
void studentSignInHeader();
void studentSignupHeader();
int mainMenu();
int signup();
bool signinAdminOption(int,string [],string [] , string , string);
bool signinStudentOption(string , string , int, string [] , int [] , string[], string[]);
void addbook(int&,string[],string[],string [],int[],int[]);
void removebook(int,string[],string[],string [],int[],int[]);
void viewbooks(int,string[],string[],string [],int[],int[]);
void addStudent(int& , string[], int[], string[], string[]);
void viewstudents(int , string[], int[], string[], string[]);
void removestudent(int , string[], int[], string[], string[]);
void issueBook(int,int,string[],string[],string[],string [] ,int[],int[]);
void searchbookbyauthor(int,string [],string [],string[], int[],int[]);
void searchbook(int,string[],string[],string [], int[],int[]);
void signUpAdmin(int&,string[],string []);
void signUpStudent(int&, string [] , int [] , string [] , string []);
int admin();
int student();
int signinoptions();
string getAnonymousPass();
int del  = 0;
main ()
{

/////////////////////ADMINs////////////////////////////////////

    int count = 3;
    string names[100] = {"zaeem", "zain" ,"moon"};
    string passwords[100] = {"123","123","123"};
    
///////////////STUDENTS///////////////////////////////////////

    int studentcount = 3;
    string studentnames[100] = {"asad", "talha", "ayyan"};
    int studentRollNumbers[100] = {1, 2, 3};
    string studentPasswords[100] = {"123", "123", "123"};
    string studentDepts[100] = {"CS", "Civ", "EE"};

//////////////////////BOOKS/////////////////////////////////////

    int    bookcount           = 3;
    string booknames     [100] = {"english", "urdu", "maths"};
    string booklocations [100] = {"shelf1", "shelf2", "shelf3"};
    string bookauthor [100] = {"aaa" , "bbb" , "ccc"};
    int    bookcopies    [100] = {10, 10, 10};
    int    bookavailables[100] = {8, 8, 8};
    
/////////////////////////////////////////////////////////////////

logout:
    int opt;
    string role = "";
    while (opt != 3)
    {
        opt = mainMenu();
        if (opt == 1)
        {
            system ("cls");
            siginHeader();
            cout << endl;
            cout << endl; 

            int oo = signinoptions();
            if (oo == 1)
            {
                system ("cls");
                 adminSignInHeader();
                 cout << endl;
                 cout << endl;

                 string un;
                 cout << "\t \t \t \t \t \t \t \t \t \t Enter Username.. ";
                 cin >> un;
                 string pass;
                 cout << "\t \t \t \t \t \t \t \t \t \t Password.. ";
                 pass = getAnonymousPass(); 

                bool found = signinAdminOption(count, names ,passwords , un, pass);
                if (found)
                {
                    role = "admin";
                    break;
                }
            }
            else if (oo == 2)
            {
                system ("cls");
                studentSignInHeader();
                cout << endl;
                cout << endl;
                string uns;
                cout << "\t \t \t \t \t \t \t \t \t \t Enter Username.. ";
                cin >> uns;
                string passs;
                cout << "\t \t \t \t \t \t \t \t \t \t Password.. ";
                passs = getAnonymousPass(); 

               bool found = signinStudentOption(uns , passs , studentcount, studentnames , studentRollNumbers , studentPasswords , studentDepts);
               if (found)
               {
                role = "student";
                break;
               }
            }
        }
        if (opt == 2)
        {
            int optsignUp = signup();
            if (optsignUp == 1)
            {
                signUpAdmin(count,names,passwords);
            }
            else if (optsignUp == 2)
            {
                signUpStudent(studentcount , studentnames , studentRollNumbers , studentPasswords , studentDepts);
            }
    
        }
        if (opt == 3)
        {
            return 0;
        }
    }
    
    if (role == "admin")
    {
        int adminoption;
        while (true)
        {
            adminoption = admin();
            if (adminoption == 1)
            {
                addbook(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (adminoption == 2)
            {
                viewbooks(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (adminoption == 3)
            {
                removebook(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (adminoption == 4)
            {
               addStudent(studentcount , studentnames , studentRollNumbers , studentPasswords , studentDepts);
            }
            else if (adminoption == 5)
            {
                viewstudents(studentcount , studentnames , studentRollNumbers , studentPasswords , studentDepts);
            }
            else if (adminoption == 6)
            {
                removestudent(studentcount , studentnames , studentRollNumbers , studentPasswords , studentDepts);
            }
            else if (adminoption == 7)
            {
                issueBook(bookcount,studentcount,studentnames,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (adminoption == 8)
            {
                searchbook(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (adminoption == 9)
            {
                searchbookbyauthor(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (adminoption == 10)
            {
               goto logout;
            }
        }
    }
    else if (role == "student")
    {
        int studentOption;
        while (true)
        {
            studentOption = student();
            if(studentOption == 1)
            {
                searchbook(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (studentOption == 2)
            {
                searchbookbyauthor(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
            }
            else if (studentOption == 9)
            {
               goto logout;
            }
        }
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
int signinoptions()
{
        int oo;
        cout << "\t \t \t \t \t \t \t \t \t \t 1. SignIn as Admin.. " << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t 2. SignIn as Student.. " << endl;
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Option.. ";
        cin >> oo;
        return oo;
}

int mainMenu()
{
    int opt;
    system ("cls");
    printHeader();
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 1. Sign In..  " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 2. Sign Up..  " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 3. Exit..  " << endl;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Option.. ";
    cin >> opt;
    return opt;
}
bool signinAdminOption(int count, string names[] , string passwords[] , string un,string pass )
{
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if ((un == names[i] && pass == passwords[i]))
        {
            found = true;
        }
 
    }
    if (found == false)
    {
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t User not found..." << endl;        
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Press any key to go back.." << endl;
        getch();
    }
    return found;

}
bool signinStudentOption(string uns, string passs , int studentcount, string studentnames[] , int studentRollNumbers[] , string studentPasswords[] , string studentDepts[])
{ 
    bool found = false;
    for (int i = 0; i < studentcount; i++)
    {
        if ((uns == studentnames[i] && passs == studentPasswords[i]))
        {
            found = true;
        }
 
    }
    if (found == false)
    {
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t User not found in database..." << endl;  
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Press any key to go back..";
        getch();
    }
    return found;
}
int signup()
{
    system ("cls");
    signupHeader();
    cout << endl;
    cout << endl;

    int o;
    cout << "\t \t \t \t \t \t \t \t \t \t 1. SignUp as Admin.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 2. SignUp as Student.. " << endl;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Option.. ";
    cin >> o;
    return o;
}
void signUpStudent(int &studentcount, string studentnames[] , int studentRollNumbers[] , string studentPasswords[] , string studentDepts[])
{
start:
    system ("cls");
    studentSignupHeader();
    cout << endl;
    cout << endl;

    string stname, stdeprt, stpass;
    int stroll;

    cout << "\t \t \t \t \t \t \t \t \t \t Enter Username.. ";
    cin >> stname;
    
    cout << "\t \t \t \t \t \t \t \t \t \t User Password.. ";
    cin >> stpass;

    cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Roll Number.. ";
    cin >> stroll;

    cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Department.. ";
    cin >> stdeprt;


    for (int i = 0; i < studentcount; i++)
    {
        if (stname == studentnames[i] && stroll == studentRollNumbers[i])
        {
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
            Sleep(700);
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Student already exist.. " << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue.. ";
            getch();
            goto start;
        }
    }    

    studentnames[studentcount] = stname;
    studentRollNumbers[studentcount] = stroll;
    studentPasswords[studentcount] = stpass;
    studentDepts[studentcount] = stdeprt;
    studentcount++;

    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
    Sleep(700);
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Signed Up Sucessfully.. ";
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue.. ";
    getch();
}
void signUpAdmin(int &count,string names[],string passwords[])
{
startadmin:
    system ("cls");
    adminsignupHeader();
    cout << endl;
    cout << endl;

    string password, role, name; 

    cout << "\t \t \t \t \t \t \t \t \t \t Enter Username.. ";
    cin >> name;
    
    cout << "\t \t \t \t \t \t \t \t \t \t User Password.. ";
    cin >> password ;

    for (int i = 0; i < count; i++)
    {
        if (name == names[i])
        {
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
            Sleep(700);    
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t User already exist.. ";
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue.. ";
            getch();
            goto startadmin;
        }
    }    
        

        names[count] = name;
        passwords[count] = password;
        count++;

    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
    Sleep(700);
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Signed Up Sucessfully.. " << endl;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue.. ";
    getch();
}  
string getAnonymousPass()
{
    char singleLetter;
    string completeWord;
    while(true)
    {
        singleLetter = getch();
        if (singleLetter == '\r')
            break;
        cout << "*";
        completeWord += singleLetter;
    }
    return completeWord;
}
int admin()
{
    system("cls");
    printHeader();
    cout << endl;
    cout << endl;
    int option = 0;
    cout << "\t \t \t \t \t \t \t \t \t \t 1. Add Book.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 2. View Books.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 3. Remove Book.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 4. Add Student.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 5. View Students.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 6. Remove Student.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 7. Issue Book.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 8. Search Book.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 9. Search Book By Author.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 10. Log Out.. " << endl;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Option.." ;
    cin >> option;
    return option;
}
void addbook(int &bookcount,string booknames[],string booklocations[],string bookauthor[] ,int bookcopies[],int bookavailables[])
{
    string name, location , author;
    int copy, available;
    
       
        bool stop = false;
        while(!stop)
        {
            system("cls");
            printHeader();
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Enter The Name Of Book.. ";
            cin >> name;
            cout << "\t \t \t \t \t \t \t \t \t \t Enter The Location Of Book.. ";
            cin >> location;
            cout << "\t \t \t \t \t \t \t \t \t \t Enter The Name OF the Author of Book.. ";
            cin >> author;
            cout << "\t \t \t \t \t \t \t \t \t \t Enter The Total Number Of Copies Of Book.. ";
            cin >> copy;
            cout << "\t \t \t \t \t \t \t \t \t \t Enter The Number Of Copies Available.. ";
            cin >> available;

            booknames[bookcount] = name;        
            booklocations[bookcount] = location;  
            bookauthor[bookcount] = author;      
            bookcopies[bookcount] = copy;        
            bookavailables[bookcount] = available;        
            bookcount++;

            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
            Sleep(700);
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \t \t \t \t Book Added Successfully..";
            cout << endl;
            cout << endl;
            


            int proceed;
            cout << "\t \t \t \t \t \t \t \t \t \t Do you want to continue?  1 for (Yes) 2 for (No).. ";
            cin >> proceed;
        if (proceed == 2)
        {
            stop = true;
        }
        }
}

void removebook(int bookcount,string booknames[],string booklocations[],string bookauthor[] ,int bookcopies[],int bookavailables[])
{
    del = 1;
    viewbooks(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
    int sr;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Sr. NO of book you want to remove.";
    cin >> sr;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
    Sleep(700);
    booknames[sr] = "";
    del = 0;
    viewbooks(bookcount,booknames,booklocations,bookauthor ,bookcopies,bookavailables);
}
void addStudent(int &studentcount, string studentnames[] , int studentRollNumbers[] , string studentPasswords[] , string studentDepts[])
{  
    bool stop = false;
    while(!stop)
    {
        system("cls");
        printHeader();
        cout << endl;
        cout << endl;
        string nam ;
        int rollno ;
        string dept , passw; 
        cout << "\t \t \t \t \t \t \t \t \t \t Enter The Name Of Student.. ";
        cin >> nam;
        cout << "\t \t \t \t \t \t \t \t \t \t Enter The Password Of Student.. ";
        cin >> passw;
        cout << "\t \t \t \t \t \t \t \t \t \t Enter The Roll Number Of Student.. ";
        cin >> rollno;
        cout << "\t \t \t \t \t \t \t \t \t \t Enter The Department Of Student.. ";
        cin >> dept;

        studentnames[studentcount] = nam;
        studentRollNumbers[studentcount] = rollno;
        studentPasswords[studentcount] = passw;
        studentDepts[studentcount] = dept;
        studentcount++;

        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
        Sleep(700); 
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Student Added Successfully..";
        cout << endl;
        cout << endl;
 
        int proceed;
        cout << "\t \t \t \t \t \t \t \t \t \t Do you want to continue?  1 for (Yes) 2 for (No).. ";
        cin >> proceed;
        if (proceed == 2){
            stop = true;
        }
    }
}
void viewbooks(int bookcount,string booknames[],string booklocations[],string bookauthor[] ,int bookcopies[],int bookavailables[])
{
    system("cls");
    printHeader();
    cout << endl;
    cout << endl;
    cout << "Serial No. \tBook Name \t     Book Location \t  Author \t Total Copies \t Copies Available" << endl;
    for (int x = 0 ; x < bookcount ; x++)
    {
        if (booknames[x] != "")
            cout << x << "\t" << "\t" << booknames[x] << "\t" << "\t" << "\t"<<  booklocations[x] << "\t" << "\t"  << "\t"<< bookauthor[x] << "\t" << "\t"  << "\t"<< bookcopies[x] << "\t" << "\t"<<bookavailables[x] << endl;
    }
    if (del == 0)
    {
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue.. ";
        getch();
    }
}
void viewstudents(int studentcount, string studentnames[] , int studentRollNumbers[] , string studentPasswords[] , string studentDepts[])
{
    system("cls");
    printHeader();
    cout << endl;
    cout << endl;
    cout << "Roll No. \tStudent Name \t Student's Department" << endl;
    for (int x = 0 ; x < studentcount ; x++)
    {
         if (studentnames[x] != "")
        cout << studentRollNumbers[x] << "\t" << "\t" << studentnames[x] << "\t" << "\t" << "\t"<<  studentDepts[x]<< endl;
    }
    if (del == 0)
    {
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue.. ";
    getch();
    }
}

void removestudent(int studentcount, string studentnames[] , int studentRollNumbers[] , string studentPasswords[] , string studentDepts[])
{
    del = 1;
    viewstudents(studentcount , studentnames , studentRollNumbers , studentPasswords , studentDepts);
    int srn;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Roll No. of Student you want to remove..";
    cin >> srn;
    studentnames[srn - 1] = "";
    del = 0;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
    Sleep(700);
    viewstudents(studentcount , studentnames , studentRollNumbers , studentPasswords , studentDepts);
}

void issueBook(int bookcount, int studentcount,string studentnames[], string booknames[],string booklocations[],string bookauthor[], int bookcopies[],int bookavailables[])
{
    system("cls");
    printHeader();
    cout << endl;
    cout << endl;
    string stdName;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Name of Student.. " ;
    cin >> stdName;

    string book;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter book name.. ";
    cin >> book;

    int bookIdx = 0;
    bool bookFound = false;
    for (int i = 0; i < bookcount; i++)
    {
        if (booknames[i] == book)
        {
            bookFound = true;
            bookIdx = i;
            break;
        }
    }
    if (!bookFound)
    {
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tPlease Wait A Moment..";
        Sleep(700);
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tBook does'nt exist.." << endl;
    }
    int stdIdx = 0;
    bool userFound = false;
    for (int i = 0; i < studentcount; i++)
    {
        if (studentnames[i] == stdName)
        {
            userFound = true;
            stdIdx = i;
            break;
        }
    }
    if (!userFound)
    {
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tPlease Wait A Moment..";
        Sleep(700);
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t User does'nt exist.." ;
    }

    if (bookFound && userFound)
    {
        bookavailables[bookIdx]--;
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tPlease Wait A Moment..";
        Sleep(700);
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tBook Issued Sucessfully..";
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue..";
    }
    getch();
}


void searchbook(int bookcount,string booknames[],string booklocations[],string bookauthor[], int bookcopies[],int bookavailables[])
{
    system("cls");
    printHeader();
    cout << endl;
    cout << endl;
    string snm;
    cout << "\t \t \t \t \t \t \t Enter the name of the book you are looking for.. ";
    cin >> snm;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
    Sleep(700);
    cout << endl;
    cout << endl;
    bool found = false;
    cout << "Serial No. \tBook Name \t     Book Location \t  Total Copies \t Copies Available" << endl;
    for (int i = 0; i < bookcount; i++)
    {
        if (booknames[i] == snm)
        {
            cout << i << "\t" << "\t" << booknames[i] << "\t" << "\t" << "\t"<<  booklocations[i] << "\t" << "\t"  << "\t" <<bookauthor[i] << "\t" << "\t"  << "\t"<< bookcopies[i] << "\t" << "\t"<<bookavailables[i] << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tPlease Wait A Moment..";
        Sleep(700);
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Book does'nt exist.." ;
    }
 
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue...";  
    getch();
}
void searchbookbyauthor(int bookcount,string booknames[],string booklocations[],string bookauthor[], int bookcopies[],int bookavailables[])
{
    system("cls");
    printHeader();
    cout << endl;
    cout << endl;
    string snm;
    cout << "\t \t \t \t \t \t \t Enter the name of the Author you are looking for.. ";
    cin >> snm;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Please wait a moment..";
    Sleep(700);
    cout << endl;
    cout << endl;
    bool found = false;
    cout << "Serial No. \tBook Name \t     Book Location \t Author \t Total Copies \t Copies Available" << endl;
    for (int i = 0; i < bookcount; i++)
    {
        if (bookauthor[i] == snm)
        {
            cout << i << "\t" << "\t" << booknames[i] << "\t" << "\t" << "\t"<<  booklocations[i] << "\t" << "\t   "  <<bookauthor[i] << "\t" << "\t"  << "\t"<< bookcopies[i] << "\t" << "\t"<<bookavailables[i] << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \tPlease Wait A Moment..";
        Sleep(700);
        cout << endl;
        cout << endl;
        cout << "\t \t \t \t \t \t \t \t \t \t Author not found.." ;
    }
 
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Press any key to continue...";  
    getch();
}
int student()
{
    system("cls");
    printHeader();
    int opti;
    cout << "\t \t \t \t \t \t \t \t \t \t 1. Search Book.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 2. Search Book by Author.. " << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t 9. Log Out.. " << endl;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \t \t \t \t Enter Your Option.." ;
    cin >> opti; 
    return opti;
}

void printHeader()
{

    cout << R"(                                                      __           __                                                           )" << endl; 
    cout << R"(                                                     /\ \       __/\ \                                                          )" << endl; 
    cout << R"(                                                     \ \ \     /\_\ \ \____  _ __    __     _ __   __  __                       )" << endl; 
    cout << R"(                                                      \ \ \  __\/\ \ \ '__`\/\`'__\/'__`\  /\`'__\/\ \/\ \                      )" << endl; 
    cout << R"(                                                       \ \ \L\ \\ \ \ \ \L\ \ \ \//\ \L\.\_\ \ \/ \ \ \_\ \                     )" << endl; 
    cout << R"(                                                        \ \____/ \ \_\ \_,__/\ \_\\ \__/.\_\\ \_\  \/`____ \                    )" << endl; 
    cout << R"(                                                         \/___/   \/_/\/___/  \/_/ \/__/\/_/ \/_/   `/___/> \                   )" << endl; 
    cout << R"(                                                                                                       /\___/                   )" << endl; 
    cout << R"(                                                                                                       \/__/                    )" << endl; 
    cout << R"(                                                                                                                       __       )" << endl; 
    cout << R"(                                           /'\_/`\                                                                    /\ \__    )" << endl; 
    cout << R"(                                          /\      \     __      ___      __       __      __    ___ ___      __    ___\ \ ,_\   )" << endl; 
    cout << R"(                                          \ \ \__\ \  /'__`\  /' _ `\  /'__`\   /'_ `\  /'__`\/' __` __`\  /'__`\/' _ `\ \ \/   )" << endl; 
    cout << R"(                                           \ \ \_/\ \/\ \L\.\_/\ \/\ \/\ \L\.\_/\ \L\ \/\  __//\ \/\ \/\ \/\  __//\ \/\ \ \ \_  )" << endl; 
    cout << R"(                                            \ \_\\ \_\ \__/.\_\ \_\ \_\ \__/.\_\ \____ \ \____\ \_\ \_\ \_\ \____\ \_\ \_\ \__\ )" << endl; 
    cout << R"(                                             \/_/ \/_/\/__/\/_/\/_/\/_/\/__/\/_/\/___L\ \/____/\/_/\/_/\/_/\/____/\/_/\/_/\/__/ )" << endl; 
    cout << R"(                                                                                  /\____/                                       )" << endl; 
    cout << R"(                                                                                  \_/__/                                        )" << endl; 
    cout << R"(                                                                 ____                     __                                    )" << endl; 
    cout << R"(                                                                /\  _`\                  /\ \__                                 )" << endl; 
    cout << R"(                                                                \ \,\L\_\  __  __    ____\ \ ,_\    __    ___ ___               )" << endl; 
    cout << R"(                                                                 \/_\__ \ /\ \/\ \  /',__\\ \ \/  /'__`\/' __` __`\             )" << endl; 
    cout << R"(                                                                   /\ \L\ \ \ \_\ \/\__, `\\ \ \_/\  __//\ \/\ \/\ \            )" << endl; 
    cout << R"(                                                                   \ `\____\/`____ \/\____/ \ \__\ \____\ \_\ \_\ \_\           )" << endl; 
    cout << R"(                                                                    \/_____/`/___/> \/___/   \/__/\/____/\/_/\/_/\/_/           )" << endl; 
    cout << R"(                                                                               /\___/                                           )" << endl; 
    cout << R"(                                                                               \/__/                                            )" << endl; 

}

void signupHeader()
{
    cout << R"(                                                                ____                        __  __                )"<<endl;
    cout << R"(                                                               /\  _`\   __                /\ \/\ \               )"<<endl;
    cout << R"(                                                               \ \,\L\_\/\_\     __     ___\ \ \ \ \  _____       )"<<endl;
    cout << R"(                                                                \/_\__ \\/\ \  /'_ `\ /' _ `\ \ \ \ \/\ '__`\     )"<<endl;
    cout << R"(                                                                  /\ \L\ \ \ \/\ \L\ \/\ \/\ \ \ \_\ \ \ \L\ \    )"<<endl;
    cout << R"(                                                                  \ `\____\ \_\ \____ \ \_\ \_\ \_____\ \ ,__/    )"<<endl;
    cout << R"(                                                                   \/_____/\/_/\/___L\ \/_/\/_/\/_____/\ \ \/     )"<<endl;
    cout << R"(                                                                                 /\____/                \ \_\     )"<<endl;
    cout << R"(                                                                                 \_/__/                  \/_/     )"<<endl;    
}
void adminsignupHeader()
{
    cout << R"(                                                                      ______      __                                                )" << endl;
    cout << R"(                                                                     /\  _  \    /\ \              __                               )" << endl;
    cout << R"(                                                                     \ \ \L\ \   \_\ \    ___ ___ /\_\    ___                       )" << endl;
    cout << R"(                                                                      \ \  __ \  /'_` \ /' __` __`\/\ \ /' _ `\                     )" << endl;
    cout << R"(                                                                       \ \ \/\ \/\ \L\ \/\ \/\ \/\ \ \ \/\ \/\ \                    )" << endl;
    cout << R"(                                                                        \ \_\ \_\ \___,_\ \_\ \_\ \_\ \_\ \_\ \_\                   )" << endl;
    cout << R"(                                                                         \/_/\/_/\/__,_ /\/_/\/_/\/_/\/_/\/_/\/_/                   )" << endl;
    cout << R"(                                                                                                                                    )" << endl;
    cout << R"(                                                                      ____                        __  __                            )" << endl;
    cout << R"(                                                                     /\  _`\   __                /\ \/\ \                           )" << endl;
    cout << R"(                                                                     \ \,\L\_\/\_\     __     ___\ \ \ \ \  _____                   )" << endl;
    cout << R"(                                                                      \/_\__ \\/\ \  /'_ `\ /' _ `\ \ \ \ \/\ '__`\                 )" << endl;
    cout << R"(                                                                        /\ \L\ \ \ \/\ \L\ \/\ \/\ \ \ \_\ \ \ \L\ \                )" << endl;
    cout << R"(                                                                        \ `\____\ \_\ \____ \ \_\ \_\ \_____\ \ ,__/                )" << endl;
    cout << R"(                                                                         \/_____/\/_/\/___L\ \/_/\/_/\/_____/\ \ \/                 )" << endl;
    cout << R"(                                                                                       /\____/                \ \_\                 )" << endl;
    cout << R"(                                                                                       \_/__/                  \/_/                 )" << endl;          
}

void adminSignInHeader()
{
    cout << R"(                                                                        ______      __                                    )" << endl;
    cout << R"(                                                                       /\  _  \    /\ \              __                   )" << endl;
    cout << R"(                                                                       \ \ \L\ \   \_\ \    ___ ___ /\_\    ___           )" << endl;
    cout << R"(                                                                        \ \  __ \  /'_` \ /' __` __`\/\ \ /' _ `\         )" << endl;
    cout << R"(                                                                         \ \ \/\ \/\ \L\ \/\ \/\ \/\ \ \ \/\ \/\ \        )" << endl;
    cout << R"(                                                                          \ \_\ \_\ \___,_\ \_\ \_\ \_\ \_\ \_\ \_\       )" << endl;
    cout << R"(                                                                           \/_/\/_/\/__,_ /\/_/\/_/\/_/\/_/\/_/\/_/       )" << endl;
    cout << R"(                                                                                                                          )" << endl;
    cout << R"(                                                                        ____                        ______                )" << endl;
    cout << R"(                                                                       /\  _`\   __                /\__  _\               )" << endl;
    cout << R"(                                                                       \ \,\L\_\/\_\     __     ___\/_/\ \/     ___       )" << endl;
    cout << R"(                                                                        \/_\__ \\/\ \  /'_ `\ /' _ `\ \ \ \   /' _ `\     )" << endl;
    cout << R"(                                                                          /\ \L\ \ \ \/\ \L\ \/\ \/\ \ \_\ \__/\ \/\ \    )" << endl;
    cout << R"(                                                                          \ `\____\ \_\ \____ \ \_\ \_\/\_____\ \_\ \_\   )" << endl;
    cout << R"(                                                                           \/_____/\/_/\/___L\ \/_/\/_/\/_____/\/_/\/_/   )" << endl;
    cout << R"(                                                                                         /\____/                          )" << endl;
    cout << R"(                                                                                         \_/__/                           )" << endl;
}
void siginHeader()
{
    cout << R"(                                                                       ____                        ______                                            )"<< endl;
    cout << R"(                                                                      /\  _`\   __                /\__  _\                                           )"<< endl;
    cout << R"(                                                                      \ \,\L\_\/\_\     __     ___\/_/\ \/     ___                                   )"<< endl;
    cout << R"(                                                                       \/_\__ \\/\ \  /'_ `\ /' _ `\ \ \ \   /' _ `\                                 )"<< endl;
    cout << R"(                                                                         /\ \L\ \ \ \/\ \L\ \/\ \/\ \ \_\ \__/\ \/\ \                                )"<< endl;
    cout << R"(                                                                         \ `\____\ \_\ \____ \ \_\ \_\/\_____\ \_\ \_\                               )"<< endl;
    cout << R"(                                                                          \/_____/\/_/\/___L\ \/_/\/_/\/_____/\/_/\/_/                               )"<< endl;
    cout << R"(                                                                                        /\____/                                                      )"<< endl;
    cout << R"(                                                                                        \_/__/                                                        )"<< endl;       
}
void studentSignInHeader()
{
    cout << R"(                                                            ____    __                __                 __                  )" << endl;
    cout << R"(                                                           /\  _`\ /\ \__            /\ \               /\ \__               )" << endl;
    cout << R"(                                                           \ \,\L\_\ \ ,_\  __  __   \_\ \     __    ___\ \ ,_\              )" << endl;
    cout << R"(                                                            \/_\__ \\ \ \/ /\ \/\ \  /'_` \  /'__`\/' _ `\ \ \/              )" << endl;
    cout << R"(                                                              /\ \L\ \ \ \_\ \ \_\ \/\ \L\ \/\  __//\ \/\ \ \ \_             )" << endl;
    cout << R"(                                                              \ `\____\ \__\\ \____/\ \___,_\ \____\ \_\ \_\ \__\            )" << endl;
    cout << R"(                                                               \/_____/\/__/ \/___/  \/__,_ /\/____/\/_/\/_/\/__/            )" << endl;
    cout << R"(                                                                                                                             )" << endl;
    cout << R"(                                                                       ____                        ______                    )" << endl;
    cout << R"(                                                                      /\  _`\   __                /\__  _\                   )" << endl;
    cout << R"(                                                                      \ \,\L\_\/\_\     __     ___\/_/\ \/     ___           )" << endl;
    cout << R"(                                                                       \/_\__ \\/\ \  /'_ `\ /' _ `\ \ \ \   /' _ `\         )" << endl;
    cout << R"(                                                                         /\ \L\ \ \ \/\ \L\ \/\ \/\ \ \_\ \__/\ \/\ \        )" << endl;
    cout << R"(                                                                         \ `\____\ \_\ \____ \ \_\ \_\/\_____\ \_\ \_\       )" << endl;
    cout << R"(                                                                          \/_____/\/_/\/___L\ \/_/\/_/\/_____/\/_/\/_/       )" << endl;
    cout << R"(                                                                                        /\____/                              )" << endl;
    cout << R"(                                                                                        \_/__/                               )" << endl;
}

void studentSignupHeader()
{
    cout << R"(                                                             ____    __                __                 __               )" << endl;
    cout << R"(                                                            /\  _`\ /\ \__            /\ \               /\ \__            )" << endl;
    cout << R"(                                                            \ \,\L\_\ \ ,_\  __  __   \_\ \     __    ___\ \ ,_\           )" << endl;
    cout << R"(                                                             \/_\__ \\ \ \/ /\ \/\ \  /'_` \  /'__`\/' _ `\ \ \/           )" << endl;
    cout << R"(                                                               /\ \L\ \ \ \_\ \ \_\ \/\ \L\ \/\  __//\ \/\ \ \ \_          )" << endl;
    cout << R"(                                                               \ `\____\ \__\\ \____/\ \___,_\ \____\ \_\ \_\ \__\         )" << endl;
    cout << R"(                                                                \/_____/\/__/ \/___/  \/__,_ /\/____/\/_/\/_/\/__/         )" << endl;
    cout << R"(                                                                                                                           )" << endl;
    cout << R"(                                                                                                                           )" << endl;
    cout << R"(                                                                        ____                        __  __                 )" << endl;
    cout << R"(                                                                       /\  _`\   __                /\ \/\ \                )" << endl;
    cout << R"(                                                                       \ \,\L\_\/\_\     __     ___\ \ \ \ \  _____        )" << endl;
    cout << R"(                                                                        \/_\__ \\/\ \  /'_ `\ /' _ `\ \ \ \ \/\ '__`\      )" << endl;
    cout << R"(                                                                          /\ \L\ \ \ \/\ \L\ \/\ \/\ \ \ \_\ \ \ \L\ \     )" << endl;
    cout << R"(                                                                          \ `\____\ \_\ \____ \ \_\ \_\ \_____\ \ ,__/     )" << endl;
    cout << R"(                                                                           \/_____/\/_/\/___L\ \/_/\/_/\/_____/\ \ \/      )" << endl;
    cout << R"(                                                                                         /\____/                \ \_\      )" << endl;
    cout << R"(                                                                                         \_/__/                  \/_/      )" << endl;
}