//Task:- write a program to make a calculator(addition,subtraction,multiplication,division)-user input
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("\nThe addition of a and b = %d",a+b);
	printf("\nThe subtraction of a and b = %d",a-b);
	printf("\nThe multiplication of a and b = %d",a*b);
   	printf("\nThe division of a and b = %d",a/b);


}
