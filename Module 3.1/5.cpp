//Task:- write a program to find the simple interest-user input

#include<stdio.h>
main()
{
	float  p,t,r;
	printf("Enter the value of p ");
	scanf("%f",&p);
	printf("Enter the value of t ");
	scanf("%f",&t);
	printf("Enter the value of r ");
	scanf("%f",&r);
	printf("Simple interest %f ",p*t*r/100);
}
