//4.Arrays
//1. Write a C program that accepts 10 integers from the user and stores them in an array. The program should then find and print the maximum and minimum values in the array.

#include <stdio.h>
int main() 
{
    int arr[100],i,max,min,size;
    printf("\nEnter the size of element:");
    scanf("%d",&size);
    for (i=0;i<size;i++) 
	{
		printf("\nenter the element of arr[%d]",i);
		scanf("%d",&arr[i]);
    }
    	max=min=arr[0];

    for (i=1;i<size;i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    printf("\nMaximum value: %d",max);
    printf("\nMinimum value: %d",min);

    return 0;
}

