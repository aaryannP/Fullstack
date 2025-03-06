// Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.


#include<iostream>
using namespace std;
int main()
{
    int marks;

    cout<<"Enter your total marks = ";
    cin>>marks;

    if(marks>=90)
    {
        cout<<"A++"<<endl;
    }
    else if(marks>=80 )
    {
        cout<<"A"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"B"<<endl; 
    }
    else if(marks>=60)
    {
        cout<<"C"<<endl;
    }
    else
    {
        cout<<"D"<<endl;
    }
    return 0;
}