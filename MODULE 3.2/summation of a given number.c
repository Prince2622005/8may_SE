//summation of a given number
#include<stdio.h>
main()
{
	int number,digit,sum=0,temp;
	printf("Enter any number:"); // Example-input -246
	scanf("%d",&number);
	temp=number;
	while(temp!=0)
	{
		digit=temp%10; //246 % 10 = 6
		sum+=digit;
		temp=temp/10;
		
	}
	printf("Sum of these numbers = %d",sum);
}
