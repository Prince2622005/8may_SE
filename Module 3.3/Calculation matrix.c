#include<stdio.h>
int main()
{
	int row,col;

	int a[2][3]={3,5,8,8,15,12};
	int b[2][3]={1,3,5,7,9,11};
	int c[2][3];
	printf("\n---First Matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	printf("\n---Second Matrix---\n");
		for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	printf("\n---Subtraction Matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	printf("\n---Addition Matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	printf("\n---Multiplication Matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
}
