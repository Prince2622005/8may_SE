//Task:- write a program to find the area of circle-user input
#include<stdio.h>
#define  PI 3.14159
int main()
{
    float radius;
    printf("Enter the r: ");
    scanf("%f",&radius);
    
    printf("The area of circle = %f",PI*radius*radius);
}
