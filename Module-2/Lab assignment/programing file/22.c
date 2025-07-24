//smallest number
//Using if else 

#include <stdio.h>
int main() 
{
    int num1,num2,num3,smallest;
    printf("Enter the number 1:");
    scanf("%d",&num1);
    printf("Enter the number 2:");
    scanf("%d",&num2);
    printf("Enter the number 3:");
    scanf("%d",&num3);
	if (num1 <= num2 && num1 <= num3) 
	{
		printf("Smallest number: %d\n",num1); 
	}
    else if (num2 <= num1 && num2 <= num3)
	{
		printf("Smallest number: %d\n", num2); 
	}
    else
	{ 
		printf("Smallest number: %d\n", num3); 
	}
	
	return 0;	
}

