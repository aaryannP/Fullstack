#include<stdio.h>
#include<string.h>

int main()
{
    int choice,lenth,i,abc,num,sum=0,rem,reverce=0,temp;
    char str[50],str1[50],str2[50];
    start:
    printf("\n1.show a string");
    printf("\n2.reverse a string");
    printf("\n3.Concatenation");
    printf("\n4.Palindrome");
    printf("\n5.Copy a string ");
    printf("\n6.Length of the string");
    printf("\n7.Frequency of character in s string ");
    printf("\n8.Find number of vowels and consonants ");
    printf("\n9.Find number of blank spaces and digits ");

    printf("\nPlease Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            printf("\nEnter the value of str = ");
	        scanf("%s",str);
	        printf("\nEntered string = %s",str);
        break;
        case 2:
            printf("\nEnter the value of str = ");
	        scanf("%s",str);
            strrev(str);
	        printf("\nReverced  string = %s",str);
        break;
        case 3:
            printf("\nEnter the value of str1 = ");
	        scanf("%s",str1);
            printf("\nEnter the value of str2 = ");
	        scanf("%s",str2);
            strcat(str1,str2);
            printf("\nConcated string = %s",str1);
        break;
        case 4:

            printf("\nEnter the value of num = ");
            scanf("%d",&num);

            temp = num;

            while (num!=0)
            {
                rem = num%10;
                reverce = (reverce*10) + rem;
                num = num/10;
            }

            printf("\nReverce = %d",reverce);

            if (reverce==temp)
            {
                printf("\n%d is pallingram number",reverce);
            }
            else
            {
                printf("\n%d is not pallingram number",reverce);
            }
        break;
        case 5:
            printf("\nEnter the value of str1 = ");
	        scanf("%s",str1);
            strcat(str2,str1);
            printf("\nCopied string = %s",str1);
            printf("\nCopied string = %s",str2);
        break;
        case 6:
            printf("\nEnter the value of str = ");
	        scanf("%s",str);
            lenth = strlen(str);
	        printf("\nLennth of  string = %d",lenth);
        break;
        case 7:
            printf("\nEnter the value of str = ");
	        scanf("%s",str);
            lenth = strlen(str);
	        printf("\nLennth of  string = %d",lenth);
        break;
        case 8:
            printf("\nEnter the value of str = ");
	        scanf("%s",str);
            for(i=0;str[i]!='\0';i++)
            {
                if(i>='a' && i<='z' || i>='A' && i<='Z')
                {
                    lenth++;
                }
            }
	        printf("\nTotal Vowel or consonant = %d",lenth);
        break;
        case 9:
            printf("\nEnter the value of str = ");
	        scanf("%s",str);
            for(i=0;str[i]!='\0';i++)
            {
                if(i=' ' || i >= '0' && i<= '9')
                {
                    lenth++;
                }
            }
	        printf("\nTotal blank space and digits are = %d",lenth);
        break;
    }
    printf("\nDo you want to continue<press 1 to  continue>");
    printf("\nEnter your choice = ");
    scanf("%d",&abc);

    if(abc == 1)
    {
        goto start;
    }


    return 0;
}