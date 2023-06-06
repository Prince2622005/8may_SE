// Write a program to find out the max number from given array using function
#include <stdio.h>


int findmax(int arr[],int size){
    // int max = arr[0];///Assume that the first element 
    // is maximum
    int max;
    int i;
    //iterate through  array elements to find maximum number 
    
    for( i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i]; //update max if larger element is found
        }
    }
    return max;
    
}

int main()
{
        int size;
        int i;
        printf("Enter the size of array:");
        scanf("%d",&size);
        
        int arr[size];
        printf("Enter the elements of array:");
        for( i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        
        //call the function to find the maximum number
        int maxnum= findmax(arr,size);
        
        printf("The maximum number in the array is : %d\n",maxnum);
}
