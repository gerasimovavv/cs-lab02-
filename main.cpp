#include <iostream>

using namespace std;

int main()
{
    cout << "enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "a + b = " << a + b << endl
         << "a - b = " << a - b << endl
         << "a * b = " << a * b << endl
         << "a / b = " << a / b << endl;
    if (a > b)
        cout << "max: " << a << endl;
        cout << "min: " << b << endl;


}
//
