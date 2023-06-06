//Sum of first and last digit
#include<stdio.h>
main()
{
	int num,sum=0,lastdigit,firstdigit;
	printf("Enter a number:");
	scanf("%d",&num);
	
	lastdigit=num%10;
	
	firstdigit=num;
	
	while(num>=10)
	{
		num=num/10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	printf("Sum = %d",sum);
}
