//Challenge 

#include <stdio.h>
int main()
{
    int num,sum = 0,digit,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num!=0) 
	{
        	digit=num%10;
			sum=sum+digit;
			rev=rev*10+digit;
			num=num/10;    
    }

    printf("Sum of digits: %d",sum);
    printf("\nReversed number: %d",rev);

    return 0;
}

