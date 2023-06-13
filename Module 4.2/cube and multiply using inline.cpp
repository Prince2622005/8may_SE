#include<iostream>
using namespace std;

//Inline function to calculate multiplication
inline int multiply(int x,int y)
{
	return x*y;
}

//Inline function to calculate cube
inline int cubic(int n1)
{
	return n1*n1*n1;
}
int main()
{
	int num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
int mulResult = multiply(num1, num2);
    std::cout << "Multiplication value: " << mulResult << std::endl;

    // Calculate the cubic value using the inline function
    int cubicResult = cubic(num1);
    std::cout << "Cubic value: " << cubicResult << std::endl;

}
