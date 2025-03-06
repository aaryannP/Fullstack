// Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.

#include<iostream>
using namespace std;
int main()
{
    int a[100],i,size,sum=0;

    cout<<"Enter the size of an array = ";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cout<<"Enter the value of a["<<i<<"] = ";
        cin>>a[i];
        sum = sum + a[i];
    }

    float avg = sum/size;

    cout<<"The sum of  array's integers = "<<sum<<endl;
    cout<<"The average of  array's integers = "<<avg<<endl;
    return 0;
}