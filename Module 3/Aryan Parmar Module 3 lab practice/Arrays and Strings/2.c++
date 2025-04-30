// Write a C++ program to perform matrix addition on two 2x2 matrices.

#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],ans[2][2],i,j,sum[2][2] ;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the value of a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }   
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the value of b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }   
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j] ==  b[i][j])
            {
                sum[i][j] = a[i][j]  + b[i][j];            
            }
        }
    }
    cout<<"\nArray after addition \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<sum[i][j];
		}
		cout<<endl;
	}

    
    return 0;
}