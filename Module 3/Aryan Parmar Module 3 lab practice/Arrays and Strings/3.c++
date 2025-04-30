// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2,copy;

    cout<<"Enter the string = ";
    cin>>s1;
    copy = s1;
    string reversed_s1 = s1;
    reverse(reversed_s1.begin(),reversed_s1.end());
    s2 = reversed_s1;
    if(copy == s2)
    {
        cout<<copy<<" is pallindrome string.";
    }
    else
    {
        cout<<copy<<" is not pallindrome string.";
    }
    return 0;
}