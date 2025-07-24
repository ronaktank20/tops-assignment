//2.Write a C program that calculates the factorial of a given number using a function.

#include<stdio.h>
int factorial(int num)
{	
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\nFactorial of %d is %d",num,fact);	
}
int main()
{
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	factorial(num);
}



