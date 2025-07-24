//The largest number.
//using Switch statement :

#include <stdio.h>
int main() 
{
    int num1,num2,num3,largest;
    printf("Enter the number 1:");
    scanf("%d",&num1);
    printf("Enter the number 2:");
    scanf("%d",&num2);
    printf("Enter the number 3:");
    scanf("%d",&num3);

    if (num1>=num2 && num1>=num3)
	{
        largest=1;
    }
	 else if (num2>=num1 && num2>=num3) 
	{
        largest=2;
    }
	 else
	{
        largest=3;
    }
    
    switch(largest) 
	{
        case 1: 
		printf("\nLargest number: %d",num1); 
				break;
        case 2: 
		printf("\nLargest number: %d",num2); 
				break;
        case 3:
			 printf("Largest number:%d",num3); 
			 break;
    }
    return 0;
}


