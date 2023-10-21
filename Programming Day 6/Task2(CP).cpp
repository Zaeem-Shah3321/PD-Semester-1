#include <iostream>
using namespace std;
float calculateAverage(float,float,float,float,float);
string calculateGrade(float);
main(){
    string name;
    cout << "Enter student name: " ;
    cin >> name;
    float marksE;
    cout << "Enter marks for English: ";
    cin >> marksE;
    float marksM;
    cout << "Enter marks for Maths: ";
    cin >> marksM;
    float marksC;
    cout << "Enter marks for Chemistry: ";
    cin >> marksC;
    float marksSS;
    cout << "Enter marks for Social Science: ";
    cin >> marksSS;
    float marksB;
    cout << "Enter marks for Biology: ";
    cin >> marksB;
    cout << "Student Name: " << name << endl;
    float percentage;
    percentage = calculateAverage(marksE,marksM,marksC,marksSS,marksB);
    cout << "Percentage: " << percentage << "%" << endl;
    string grade;
    grade = calculateGrade (percentage);
    cout << "Grade: " << grade;
}
float calculateAverage(float marksEng, float marksMath, float marksChe, float marksSocSci, float marksBio)
{
    float average;
    average = (marksEng + marksMath + marksChe + marksSocSci + marksBio) / 5;
    return average;
}
string calculateGrade (float average)
{
    if (average >= 90 && average <= 100)
    {
        return "A+";
    }
    if (average >= 80 && average <= 89)
    {
        return "A";
    }
    if (average >=70 && average <= 79)
    {
        return "B+";
    }
    if (average >= 60 && average <= 69)
    {
        return "B";
    }
    if (average >= 50 && average <= 59)
    {
        return "C";
    }
    if (average >= 40 && average <= 49)
    {
        return "D";
    }
    if (average < 40)
    {
        return "F";
    }
}