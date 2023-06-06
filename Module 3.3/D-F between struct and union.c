#include <stdio.h>
#include<string.h>

// Structure definition - structure can store more than 1 datatype at a time
struct person
{
    char name[20];
    int age;
    
};

//Union definiton - union can only store 1 datatype at a time 
union data{
//    int value;
    float salary;
};
int main()
{
    struct person p;
    strcpy(p.name,"Prince");
    p.age = 19;
    
    printf("Structure Example:-\n\n");
    printf("Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    
    printf("\nUnion Example:-");
    union data d;
    
    d.salary=15000;

    printf("\nSalary = %f\n",d.salary);
}
