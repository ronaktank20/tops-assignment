// 6.Write a C program to print numbers from 1 to 10 using all three types of loops (while , for ,do-while)
 
#include<stdio.h>
int main ()
{
	int i,k,r;
	printf("\nfor loop=\n");
	for(i=1;i<=10;i++)
	{
		printf("\t%d",i);
	}
	printf("\nwhile loop=\n"); 
	k=1;
	while(k<=10)
	{
		printf("\t%d",k);
		k++;
	}
	printf("\ndo while loop=\n");
	r=1;
	do
	{
		printf("\t%d",r);
		r++;
	} while (r<=10);
	
	
	return 0;
}

