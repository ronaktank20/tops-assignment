//1.Write a C program that checks whether a given number is a prime number or not using a for loop

#include <stdio.h>

int main() 
{
    int num,i,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    i=2;
	while(i<=num/2) 
	{
        if(num%i==0) 
		{
        	flag=1;
        }
        i++;
    }
	if(flag==0)
	{
		printf("%d is a prime number.\n", num);
	}
	else 
	{
		printf("%d is not a prime number.\n", num);	
	}
    
    return 0;
}



