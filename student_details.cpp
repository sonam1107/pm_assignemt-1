#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int roll;
    float marks;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}
