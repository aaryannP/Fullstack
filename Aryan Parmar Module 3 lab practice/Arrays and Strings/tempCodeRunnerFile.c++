// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).

#include<iostream>
using namespace std;
int main()
{
    string str,reverse_string ;

    cout<<"Enter the value of string = ";
    cin>>str ;

    reverse_string = strrev(str) ;

    cout<<reverse_string;
    return 0;
}