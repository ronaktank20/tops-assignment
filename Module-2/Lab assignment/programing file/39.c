//Challenge:

#include<stdio.h>
int main()
{
	char str[100];
	char num[100],sp[100];
	int k=0,m=0,i;
	printf("\nEnter the value in str = ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	
		if(str[i]>='0' && str[i]<='9')
		{
			num[k] = str[i];
			k++;
		}
		else
		{
			sp[m] = str[i];
			m++;
		}
	}
	printf("\nOriginal value of str = %s",str);
	printf("\ndigit = ");
	for(i=0;i<k;i++)
	{
		printf("%c ",num[i]);
	}
	printf("\nspecial characters = ");
	for(i=0;i<m;i++)
	{
		printf("%c ",sp[i]);
	}
	return 0;
}

