//2. Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.

#include<stdio.h>
int main()
{
	int a[30][30],b[30][30],ans[30][30];
	int size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\nEnter elements for the first 2x2 matrix:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements for the second 2x2 matrix:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
			
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nResultant matrix after addition\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
				
				return 0;
		}



