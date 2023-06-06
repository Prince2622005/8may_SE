#include<stdio.h>
main()
{
	int year;
	printf("Enter any year\n : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("It is a Leap Year");
	}
	else
	{
		printf("It is not a Leap Year");
	}
}
