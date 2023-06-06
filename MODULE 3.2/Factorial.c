//WAP to print Factorial of a given number
#include<stdio.h>
main()
{
	int number,fact=1,i;
	printf("Enter a number: ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		fact=fact*i;
	}
	printf("Factorial of a given number = %d",fact);
}
