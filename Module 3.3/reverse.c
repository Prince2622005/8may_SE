#include<stdio.h>
#include<string.h>
int main()
{
   char name[20];
   printf("Enter your name:");
   gets(name);
   printf("\n %s",name);
   printf("The reverse string is = %s",strrev(name));
}
