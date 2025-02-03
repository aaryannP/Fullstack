// Write a C program that defines a structure to store a student's details (name,
// roll number, and marks). Use an array of structures to store details of 3
// students and print them

#include<stdio.h>
struct Student
{
	char name;
	int rollnumber,marks;
};
int main()
{
	struct Student s[50];
	int i,count;
	for(i=0;i<3;i++)
	{
		printf("\nEnter the name = ");
		scanf("%s",&s[i].name);
		printf("\nEnter the rollnumber = ");
		scanf("%d",&s[i].rollnumber);
		printf("\nEnter the marks = ");
		scanf("%d",&s[i].marks);
	}
	for(i=0;i<3;i++)
	{
		printf("\nName = %s",s[i].name);
		printf("\nRollnumber = %d",s[i].rollnumber);
		printf("\nMarks = %d",s[i].marks);
	}
	return 0;
}
