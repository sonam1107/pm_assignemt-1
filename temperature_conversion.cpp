#include <iostream>
using namespace std;

int main()
{
    int choice;
    float temp;

    cout << "Temperature Conversion\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        float fahrenheit = (temp * 9.0 / 5.0) + 32;
        cout << temp << "°C = " << fahrenheit << "°F\n";
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        float celsius = (temp - 32) * 5.0 / 9.0;
        cout << temp << "°F = " << celsius << "°C\n";
    }
    else
    {
        cout << "Invalid choice!\n";
    }

    return 0;
}
