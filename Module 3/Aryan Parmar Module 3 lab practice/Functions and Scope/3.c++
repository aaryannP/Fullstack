// Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.




// Global Scope :- Global Scope is declare out of function;
// Local Scope :- Local Scope is declare in function;
#include<iostream>
using namespace std;
int result; // Global Scope
int add(int n1,int n2)
{
    result = n1+n2;
    return result;
}
int main()
{
    int num1,num2; // Local Scope
    cout<<"Enter the value of num1 = ";
    cin>>num1;
    cout<<"Enter the value of num2 = ";
    cin>>num2;

    result = add(num1,num2);

    cout<<endl<<"The Adition of "<<num1<<" & "<<num2<<" = "<<result;
    return 0;
}