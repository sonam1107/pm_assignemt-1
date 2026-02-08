#include <iostream>
using namespace std;

int main()
{
    int numSubjects;
    float totalMarks = 0, percentage;
    char grade;

    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    float marks[numSubjects];
    for (int i = 0; i < numSubjects; i++)
    {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    percentage = (totalMarks / (numSubjects * 100)) * 100;

    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    cout << "\n--- Grade Report ---\n";
    cout << "Total Marks: " << totalMarks << " / " << (numSubjects * 100) << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
