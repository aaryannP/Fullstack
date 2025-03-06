// Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them.

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int const b=20;
    float c=5.00 , d=2.5;
    string str1 = "Aryan", str2 = "Parmar";

    cout<<"The Adition of "<<a<<" and "<<b<<" is "<<a + b<<endl;

    cout<<"The divison of "<<c<<" and "<<d<<" is "<<c / d<<endl;

    cout<<"The full name is "<<str1 + str2; 
    return 0;
}