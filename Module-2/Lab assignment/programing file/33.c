//5.Functions
//1.Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.

#include<stdio.h>
int fibonacci()
{
	int terms,i,n1=0,n2=1,n3;
	printf("\nEnter the terms = ");
	scanf("%d",&terms);
	printf("\nFibonnaci series = %d %d ",n1,n2);
	for(i=1;i<=terms-2;i++)
	{
		n3 = n1+n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;	
	}
	
}
int main()
{
	fibonacci();
	return 0;
}

