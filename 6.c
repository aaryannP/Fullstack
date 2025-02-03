// Write a C program to print numbers from 1 to 10 using all three types of loops
// (while, for, do-while).

#include<stdio.h>
int main()
{
	int i;
	printf("for loop");
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
	}


	printf("\n");
	printf("\nwhile loop");
	i=1;
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}


	printf("\n");
	printf("\ndo while loop");
	i=1;
	do{
		printf("\n%d",i);
			i++;
	}
	while(i<=10);

	return 0;
}
