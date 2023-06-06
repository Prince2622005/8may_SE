#include<stdio.h>
#include<string.h>
int main()
{
   char name[20];
   printf("Enter your name:");
   gets(name);
   printf("\n ",name);
   printf("The length of this is : %d",strlen(name));
}
