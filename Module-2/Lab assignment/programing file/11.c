//11. Write a C program that takes two strings from the user and concatenates them using strcat() .Display the concatenated string and its leng thusing strlen()

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	printf("\n\nOriginal value of str1 = %s",str1);
	printf("\n\nOriginal value of str2 = %s",str2);
	
	strcat(str1,str2);

	printf("\n\nValue of str1 after concatination = %s",str1);
	printf("\n\nlength of concatination = %d",strlen(str1));
	
	return 0;
}

