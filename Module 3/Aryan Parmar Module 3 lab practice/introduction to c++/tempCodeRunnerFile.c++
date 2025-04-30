// Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.

// with Procedure Oriented Programming
#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the value of l = ");
    scanf("%d",&l);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    printf("\nThe Area of Rectangle = %d",l*b);
    return 0;
}


// with Object Oriented Programming
#include<iostream>
using namespace std;
class rect
{
    public:
        rect(int l,int b)
        {
            cout<<endl<<"The Area of Rectangle = "<<l*b;
        }
};
int main()
{
    int l,b;
    cout<<endl<<"Enter the value of l = ";
    cin>>l;
    cout<<endl<<"Enter the value of b = ";
    cin>>b;
    rect a(l,b);    
    return 0;
}
