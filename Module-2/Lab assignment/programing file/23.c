//Using switch statement 
//smallest number
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
		smallest = 1;
	}
    else if (num2 <= num1 && num2 <= num3)
	{
		smallest = 2;
	}
    else
	{ 
	smallest = 3;
	}
	
	switch (smallest)
	{
        case 1: 
		printf("Smallest number: %d\n",num1); 
		break;
        case 2: 
		printf("Smallest number: %d\n", num2); 
		break;
        case 3:
		printf("Smallest number: %d\n", num3); 
		break;
    }
	return 0;	
}


