#include <iostream> 
using namespace std;
main (){
    int days;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    int patients;
    int doctors = 7;
    int treated = 0;
    int notTreated = 0;
    for (int m = 1 ; m <= days ; m++)
    {
        if ((m % 3 == 0) && notTreated > treated)
        doctors = doctors + 1;
        cout << "Number of patients who visited hospital on Day " << m << ": ";
        cin >> patients;
        if (patients > doctors)
        {
            notTreated = notTreated + (patients - doctors);
            treated = treated + doctors;
        }
        else if (patients <= doctors)
        {
            treated = treated + patients;
            notTreated += 0;
        }
    }
    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << notTreated;
}  