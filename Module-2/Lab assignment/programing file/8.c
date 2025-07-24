// 8.Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.

#include<stdio.h>
int fact(int num); //function declaration 
int fact(int num) //function defination
{	
	int i,fact=1;	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;		
}
int main ()
{
	int num;
	printf("\nenter the number :");
	scanf("%d",&num);
	int result=fact(num); // function calling 
	printf("\nThe factorial of %d is %d",num,result);
	return 0;
}

