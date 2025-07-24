//Challenge 

#include<stdio.h>
int main()
{
	int a[30][30],b[30][30],ans[30][30];
	int size,i,j,k;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\nEnter elements for the first 3x3 matrix:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements for the second 3x3 matrix:\n");
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
		for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = 0;
					for(k=0;k<size;k++)
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
					}
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
			
			printf("\nResultant matrix after multiplication:\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				
				printf("\n");
			
				return 0;
			}
}

