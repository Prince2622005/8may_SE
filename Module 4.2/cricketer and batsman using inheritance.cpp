#include<iostream>
using namespace std;

class cricketer{
    protected:
    string name;
    int age;
    public:
        void inputdata()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
};
class batsman:public cricketer
{
private:
     int totalruns;
     float avgruns;
     int bestperformance;
     
public:
     void inputbatsmandata()
     {
         inputdata();
         cout<<"Enter total runs: ";
         cin>>totalruns;
         cout<<"Enter best performance: ";
         cin>>bestperformance;
     }
     void calculateavgruns(){
         avgruns=totalruns/bestperformance;
     }
     void displaydata(){
         cout<<"\nPlayer details:";
         cout<<"\nName:"<<name<<endl;
         cout<<"\nAge:"<<age<<endl;
         cout<<"\nTotal runs:"<<totalruns<<endl;
         cout<<"\nBest performance:"<<bestperformance<<endl;
         cout<<"\nAverage Runs:"<<avgruns<<endl;
     }
};
int main()
{
    batsman b;
    b.inputbatsmandata();
    b.calculateavgruns();
    b.displaydata();
    return 0;
}


