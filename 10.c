// Write a C program to demonstrate pointer usage. Use a pointer to modify the
// value of a variable and print the result.

#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	printf("orignal value=%d",a);
	printf("\naddress of orignal value=%p",&a);
	*ptr=20;
	printf("\nmodified value=%d",a);
	printf("\nadress of modified value=%p",&a);
	return 0;
}
