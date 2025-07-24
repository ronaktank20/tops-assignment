//3.Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.

#include <stdio.h>
int main()
{
    int num,sum = 0,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num!=0) 
	{
        	digit=num%10;
			sum=sum+digit;
			num=num/10;    
    }

    printf("Sum of digits: %d\n",sum);

    return 0;
}


