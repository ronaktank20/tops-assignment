//2.Write a C program that takes an integer from the user and checks the following using different operators:
//Whether the number is even or odd.

#include <stdio.h>

int main()
 {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num%2==0)
	{
        printf("\n%d is an even number.\n",num);
    } else 
	{
        printf("\n%d is an odd number",num);
    }

    return 0;
}


