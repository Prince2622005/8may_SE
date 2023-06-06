// Vowel or Consonant using switch case 
#include<stdio.h>
int main()
{
    char  vowel;
    printf("Enter any vowel from a,e,i,o,u  ");
    scanf("%c",&vowel);
    
    switch(vowel){
        case 'a':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case 'o':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("Consonant\n");
        
    }
}
