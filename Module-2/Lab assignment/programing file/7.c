//7.Write a C program that uses the break statement to stop printing numbers when it reaches 5 .Modify the program to skip printing the number 3 using the continue statement.

// Using break statement :

#include<stdio.h>
int main ()
{
	int i,j;
	printf("break statment :");
	for(i=0;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		
		printf("\n%d",i);
	}
	    
	printf("\n\n");

//2.Using continue statement:
	
	printf("continue statment :");
	for(j=0;j<=5;j++)
	{
		if(j==3)
		{
			continue;
		}
		
		printf("\n%d",j);
	}
	return 0;	
}

