#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;

    cout << "Enter radius of circle: ";
    cin >> radius;

    float area = 3.14159 * radius * radius;

    cout << "Area of circle: " << area << endl;

    return 0;
}
