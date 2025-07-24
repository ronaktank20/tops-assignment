//2.Write a C program that takes an integer input from the user and prints its multiplication  table using a for loop.

#include <stdio.h>
int main() 
{
    int number,i;
    printf("Enter the table of number:");
    scanf("%d",&number);
    printf("\nMultiplication table of %d",number);
    for(i=1;i<=10;i++) 
	{
        printf("\n%d x %d = %d\n",number,i,number*i);
    }

    return 0;
}


