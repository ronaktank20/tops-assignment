//Challenge

#include<stdio.h>
int main()
{
	int arr[100],size,i,j,temp;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i] = arr[j];
				arr[j] = temp;			
			}
		}
	}
	printf("\nArray in ascending order = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}


