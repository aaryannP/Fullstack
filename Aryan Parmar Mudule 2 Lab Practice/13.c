// Write a C program to create a file, write a string into it, close the file, then
// open the file again to read and display its contents.

#include<stdio.h>
int main()
{
	FILE*fp1;
    fp1=fopen("first.text","w");
    fprintf(fp1,"This is My first text");
    fclose(fp1);
    fp1=fopen("first.text","r");
    char str[100];
    fgets(str,100,fp1);
	return 0;
}