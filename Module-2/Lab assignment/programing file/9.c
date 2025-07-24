//9. Write a C program that stores 5 integers in a one-dimensional array and prints them .Extend this to handle a two-dimensional array(3x3matrix)and calculate the sum of all elements.
#include<stdio.h>
int main ()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("\nenter the element of a[%d] =",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray of =");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
		printf("\n");
	
	int	arr[3][3],k,j;
	
	for(k=0;k<3;k++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter the element of arr[%d][%d]=",k,j);
			scanf("%d",&arr[k][j]);
		}
	}
	printf("\nArray of Matrix=\n");
	for(k=0;k<3;k++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[k][j]);
		}
			printf("\n");
	}
		
	return 0;
}




