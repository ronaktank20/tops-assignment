#include<stdio.h>
int main ()
{
	int a[20][20],b[2][20],c[20][20];
	int i,size,j,k;
	printf("\nenter the size of an array =");	
	scanf("%d",&size);
	printf("\nMatrix : 1");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nenter the element =");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("\nMatrix : 2");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nenter the element =");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{	
				c[i][j]=0;
			for(k=0;k<size;k++)
			{
				c[i][j]= c[i][j]+(a[i][k]*b[k][j]);
			}
		}	
	}
	printf("\nMultipication Matrix =\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",c[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
