// Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.
 
#include<iostream>
using namespace std;
int main()
{
	int Num1,Num2;
	cout<< "Enter the value of Num1 = " ;
	cin>>Num1;
	cout<<"Enter the value of Num2 = ";
	cin>>Num2;


	//arithmatic operation
	
	
	cout<< "arithmatic operator";
	cout<<"The adition of "<<Num1<<" and "<<Num2<<" is "<<Num1 + Num2;
    cout<<"The subtraction of "<<Num1<<" and "<<Num2<<" is "<<Num1 - Num2;
    cout<<"The multiplication of "<<Num1<<" and "<<Num2<<" is "<<Num1 * Num2;
    cout<<"The division of "<<Num1<<" and "<<Num2<<" is "<<Num1 / Num2;
    cout<<"The remainder of "<<Num1<<" and "<<Num2<<" is "<<Num1 % Num2;


	//relational operations
	
	
	cout<<"relational operator";
	int temp = Num1 == Num2; 
	int temp2 = Num1!=Num2;
	int temp3 = Num1 < Num2 ;
	int temp4 = Num1 <= Num2 ;
	int temp5 = Num1 > Num2 ;
	int temp6 = Num1 >= Num2 ;
    cout<<Num1<< " equal to "<<Num2<< " is "<<temp<<endl;
    cout<<Num1<< " not equal to "<<Num2<< " is "<<temp2<<endl;
    cout<<Num1<< " less than  "<<Num2<< " is "<<temp3<<endl;
    cout<<Num1<< " less than equal to "<<Num2<< " is "<<temp4<<endl;
    cout<<Num1<< " greater than "<<Num2<< " is "<<temp5<<endl;
    cout<<Num1<< " greater than equal to "<<Num2<< " is "<<temp5<<endl;
	
	//Logical operator


	cout<<"logical operator";
	cout<<Num1<< " AND " <<Num2<< " is " <<Num1&&Num2 ;
	cout<<Num1<< " OR " <<Num2<< " is " <<Num1||Num2 ;
	cout<<endl<<Num1<< " Not is " << !Num1<<endl;
	cout<<endl<<Num2<< " Not is " << !Num2<<endl;
	return 0;
}

