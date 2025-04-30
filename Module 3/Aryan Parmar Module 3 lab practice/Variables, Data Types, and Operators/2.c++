// Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.




#include <iostream>
using namespace std;
int main() 
{
    // Implicit Type Conversion 
    int a = 10;
    double b = a; 
    cout << "Implicit Conversion :-" << endl;
    cout << "Integer value: " << a << endl;
    cout << "Double value after implicit conversion: " << b << endl;
    cout << endl;

    // Implicit Type Conversion
    double c = 123.45;
    int d = c; 
    cout << "Implicit Conversion :-" << endl;
    cout << "Double value: " << c << endl;
    cout << "Integer value after implicit conversion: " << d << endl;
    cout << endl;

    // Explicit Type Conversion
    double pi = 3.14159;
    int integerPi = (int)pi;
    cout << "Explicit Conversion :-" << endl;
    cout << "Double value: " << pi << endl;
    cout << "Integer value after Explicit Conversion: " << integerPi << endl;
    cout << endl;
    return 0;
}