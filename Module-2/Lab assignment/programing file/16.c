//Whether the number is positive, negative, or zero.

#include <stdio.h>
int main() 
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number>0) 
	{
        printf("\n%d is a positive number",number);
    } 
	else if (number<0) 
	{
        printf("\n%d is a negative number",number);
    } 
	else 
	{
        printf("\n%d is zero",number);
    }

    return 0;
}


