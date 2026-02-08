#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate per annum: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    float interest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << (principal + interest) << endl;

    return 0;
}
