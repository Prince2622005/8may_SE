//Function Overloading
#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a*b*c;
}
float sum(float a,float b)
{
	return a/b;
}
double sum(double a,double b)
{
    return a-b;
}
int main()
{
	cout<<"Addition: "<<sum(10,20);
	cout<<"\nMultiplication: "<<sum(1,20,30);
	cout<<"\nSubtraction:"<<sum(10,5);
	cout<<"\nDivision: "<<sum(56.2f,10.1f);
}
