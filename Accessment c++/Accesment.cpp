#include<iostream>
using namespace std;
void Totalcost(int guests,int minutes,string event,string name)
{
    int servers;
    const double Costperhour = 18.50, Costperminutes = 0.40, CostofDinner = 20.70 ;
    float cost1,cost2,deposit,Costforoneserver,Totalfoodcost,Averagecost,Totalcost; 
    servers = guests/20;

    cost1 = (minutes/60)*Costperhour;
    cost2 = (minutes%60)*Costperminutes;
    Costforoneserver = cost1 + cost2;

    Totalfoodcost = guests * CostofDinner ;

    Averagecost = Totalfoodcost / guests ;

    Totalcost =Totalfoodcost + (Costforoneserver * servers);

    cout<<"Numbers of servers = "<<servers<<endl;
    cout<<"The cost of servers = "<<Costforoneserver<<endl;
    cout<<"The cost for food is = "<<Totalfoodcost<<endl;
    cout<<"Average cost per person = "<<Averagecost<<endl<<endl;

    cout<<"Total cost is = "<<Totalcost<<endl;

    deposit = Totalcost * 25/100 ;
    cout<<"Please deposite a 25% deposit to reserve the event."<<endl;
    cout<<"The deposit needed is = "<<deposit<<endl;


} 
int main()
{
    int guests,minutes;
    string event,name,lname;

    cout<<"Enter the name of event "<<endl;
    cin>>event;
    cout<<"Enter the customer's first and last name "<<endl;
    cin>>name;
    cout<<"Enter the number of guests "<<endl;
    cin>>guests;
    cout<<"Enter the number of minutes in the event "<<endl;
    cin>>minutes;

//	pass arguments in functions.
    Totalcost(guests,minutes,event,name);
    
    return 0;
}
