//Write a C program that takes the marks of a student as input and displays the corresponding  grade based on the following conditions.

//Using if-else

#include<stdio.h>
int main ()
{
	int grade,marks;
	printf("\nenter the marks:");
	scanf("%d",&marks);
	if(marks>90)
	{
		printf("\ngrade for A");
	}
	else if(marks>75 && marks<=90)
	{
		printf("\ngrade for B");
	}
	else if(marks>50 && marks<=75)
	{
		printf("\ngrade for C");
	}
	else
	{
		printf("\ngrade for D");
	}
	return 0;
}


