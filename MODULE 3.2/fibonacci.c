//Fibonacci series
#include<stdio.h>
main()
{
	int number,i,term1=0,term2=1,nexterm;
	printf("Enter any number = ");
	scanf("%d",&number);
	printf("Fibonacci series: ");
	for(i=1;i<=number;i++)
	{
		printf("%d ",term1);
		nexterm=term1+term2;
		term1=term2;
		term2=nexterm;
	}
	
};
