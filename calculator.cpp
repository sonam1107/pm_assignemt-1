#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    cout << "=== Calculator Menu ===\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Sin\n";
    cout << "8. Cos\n";
    cout << "9. Tan\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero!\n";
        }
        break;
    case 5:
        cout << "Enter base: ";
        cin >> num1;
        cout << "Enter exponent: ";
        cin >> num2;
        result = pow(num1, num2);
        cout << "Result: " << num1 << "^" << num2 << " = " << result << endl;
        break;
    case 6:
        cout << "Enter number: ";
        cin >> num1;
        if (num1 >= 0)
        {
            result = sqrt(num1);
            cout << "Square root of " << num1 << " = " << result << endl;
        }
        else
        {
            cout << "Error: Cannot compute square root of negative number!\n";
        }
        break;
    case 7:
        cout << "Enter angle in degrees: ";
        cin >> num1;
        result = sin(num1 * 3.14159 / 180);
        cout << "sin(" << num1 << ") = " << result << endl;
        break;
    case 8:
        cout << "Enter angle in degrees: ";
        cin >> num1;
        result = cos(num1 * 3.14159 / 180);
        cout << "cos(" << num1 << ") = " << result << endl;
        break;
    case 9:
        cout << "Enter angle in degrees: ";
        cin >> num1;
        result = tan(num1 * 3.14159 / 180);
        cout << "tan(" << num1 << ") = " << result << endl;
        break;
    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}
