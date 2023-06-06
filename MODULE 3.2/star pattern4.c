#include<stdio.h>
main()
{
	int n,i,j,totalcolsinrows;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		totalcolsinrows=i>n ? 2*n-i:i;
		for(j=0;j<totalcolsinrows;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
