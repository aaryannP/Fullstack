//Write a program that prints a right-angled triangle using stars(*) with a nested loop.

#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;

    cout<<"Enter the row count = ";
    cin>>row;

    int spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(k=1;k<=spc;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		spc--;
		cout<<endl;
	}
    return 0;
}