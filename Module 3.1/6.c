#include<stdio.h>
main()
{
   int year,days;
   printf("Enter year: ");
   scanf("%d",&year);
   //convert year into days
   days=year*365;
   printf("%d year is equls to %d days. \n",year,days);
   //convert days into years
   year=days/365;
   printf("%d days is equals to %d year. \n",days,year);
}
