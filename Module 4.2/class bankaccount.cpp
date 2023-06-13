#include<iostream>
using namespace std;
class bank //class define
{
    public:
   int accno;
    string name;
   string account;
    int balance;
    void inputdata()  //member function(method)
    {
        cout<<"Enter name of the depositor : ";
        cin>>name;
        cout<<"Enter your account number : ";
        cin>>accno;
        cout<<"Enter type of account : ";
        cin>>account;
        cout<<"Enter your balance : ";
        cin>>balance;
    }
    void displaydata()
    {
         cout<<"\nName of the depositor : "<<name;
        cout<<"\nYour account number : "<<accno;
        cout<<"\nYour account type : "<<account;
        cout<<"\nYour balance : "<<balance;
    }
    
};
int main()
{
    bank s;
    s.inputdata();
    s.displaydata();
}
