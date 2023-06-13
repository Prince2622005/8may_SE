#include<iostream>
using namespace std;

class calculator
{
    public:
    calculator()
    {
        cout<<"Calculator: "<<endl;
    }
    calculator(int a,int b)
    {
        cout<<"Addition of a and b = "<<a+b<<endl;
        cout<<"Subtraction of a and b = "<<a-b<<endl;
        cout<<"Division of a and b = "<<a/b<<endl;
        cout<<"Multiplication of a and b = "<<a*b
<<endl;   
}
};
int main()
{
    calculator c1=calculator();
    calculator c2=calculator(20,5);
}
