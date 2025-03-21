#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store marks for each subject and the sum of marks
    float marks1, marks2, marks3, sum, average;
    char grade;

    // Ask for marks for each subject
    cout << "Enter marks for Subject 1: ";
    cin >> marks1;

    cout << "Enter marks for Subject 2: ";
    cin >> marks2;

    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    // Calculate the sum of marks
    sum = marks1 + marks2 + marks3;

    // Calculate the average
    average = sum / 3;

    // Determine the grade based on the average
    if (average >= 90)
    {
        grade = 'A'; // Grade A for average >= 90
    }
    else if (average >= 80)
    {
        grade = 'B'; // Grade B for average >= 80
    }
    else if (average >= 70)
    {
        grade = 'C'; // Grade C for average >= 70
    }
    else if (average >= 60)
    {
        grade = 'D'; // Grade D for average >= 60
    }
    else
    {
        grade = 'F'; // Grade F for average < 60
    }

    // Output the average and grade
    cout << "\nAverage marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
