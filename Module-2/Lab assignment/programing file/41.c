//Extra  Challenges

//1. Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 =1^3+5^3+3^3)

#include<stdio.h>
int main()
{
	int num,digit=0,sum=0,power,i,rem;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	int copy = num;
	while(num!=0)
	{
		num = num/10;
		digit++;
	}
	for(i=1;i<=digit;i++)
	{
		rem = temp%10;
		power = pow(rem,digit);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}



