//6.Strings 
//1. Write a C program that takes a string as input and reverses it using a function

#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	strrev(str1);
	
	printf("\nReversed string = %s",str1);
	printf("\nReversed string = %s",strrev(str2));
	return 0;
}

