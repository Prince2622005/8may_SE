/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
? Rectangle: Area * breadth
? Triangle: ½ *Area* breadth
 ? Circle: Pi * Area *Area */
 #include<iostream>
 using namespace std;
 int sum(int area,int breadth)
 {
     return area*breadth;
 }
 float sum(float area,float breadth)
 {
     return (1/2*area)*breadth;
 }
 double sum(double area)
 {
     return 3.14*area*area;
 }
 int main()
 {
     cout<<"Area of Rectangle = "<<sum(10,5);
     cout<<"\nArea of Triangle = "<<sum(10,2);
     cout<<"\nArea of Circle = "<<sum(2);
 }
