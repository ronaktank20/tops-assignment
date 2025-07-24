//3.Write a C program that counts the number of words in a sentence entered by the user.

#include<stdio.h>
int main()
{
	char str[100];
	int wordcout=1,i;
	printf("\nEnter the str = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]!='\0' && str[i-1]!=' ')
		{
			wordcout++;
		}
	}
	printf("\nNumber of words = %d",wordcout);
	return 0;
}


