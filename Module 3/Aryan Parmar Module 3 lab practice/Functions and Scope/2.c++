// Write a C++ program that calculates the factorial of a number using recursion.

#include<iostream>
using namespace std;
int factorial(int num);
int main()
{
	int num;
    cout<<"Enter the number for factorial = ";
    cin>>num;
    int result = factorial(num);
    cout<<"The factorial of "<<num<<" is "<<result<<endl;
	
	return 0;
}
int factorial(int num)
{
	int i;
	int fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}