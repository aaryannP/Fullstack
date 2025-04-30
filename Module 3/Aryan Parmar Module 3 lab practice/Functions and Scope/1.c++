// Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input

#include<iostream>
using namespace std;
int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
float divide(int num1,int num2);
int main()
{
    int num1,num2,choice;

    cout<<"Enter the Value of num1 = ";
    cin>>num1;
    cout<<"Enter the Value of num2 = ";
    cin>>num2;

    cout<<"press 1 for Adition."<<endl;
    cout<<"press 2 for Subtraction."<<endl;
    cout<<"press 3 for Multiplication."<<endl;
    cout<<"press 4 for Divison."<<endl;

    cout<<"Enter your choice = ";
    cin>>choice;

    if(choice == 1)
    {
        int result = add(num1,num2);
        cout<<"The adition of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    }
    else if(choice == 2)
    {
        int result = subtract(num1,num2);
        cout<<"The subtraction of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    }
    else if(choice == 3)
    {
        int result = multiply(num1,num2);
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    }
    else if(choice == 4)
    {
        float result = divide(num1,num2);
        cout<<"The division of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    }
    else
    {
        cout<<"Please Enter valid choice.";
    }

    // switch(choice)
    // {
    //     case 1 :
    //             int result = add(num1,num2);
    //             cout<<"The adition of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    //     break;
    //     case 2 :
    //             int result = subtract(num1,num2);
    //             cout<<"The subtraction of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    //     break;
    //     case 3 :
    //             int result = multiply(num1,num2);
    //             cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    //     break;
    //     case 4 :
    //             float result = divide(num1,num2);
    //             cout<<"The division of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    //     break;
    // }
    return 0;
}
int add(int num1,int num2)
{
    int ans;
    ans = num1 + num2;
    return ans;
}
int subtract(int num1,int num2)
{
    int ans;
    ans = num1 - num2;
    return ans;
}
int multiply(int num1,int num2)
{
    int ans;
    ans = num1 * num2;
    return ans;
}
float divide(int num1,int num2)
{
    int ans;
    ans = num1 / num2;
    return ans;
}