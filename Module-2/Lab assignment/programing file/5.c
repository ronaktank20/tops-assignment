//5.Write a C program to check if a number is even or odd using an if-else statement.Extend the program using a switch statement to display the month name based on the user's input(1forJanuary,2forFebruary,etc.)

#include<stdio.h>
int main()
{
	int num;
	printf("\nenter the number =");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\nthe number %d is even\n",num);
	}
	else
	{
		printf("\nthe number %d is odd\n",num);
	}
	int choice;
	printf("\nenter the month (1-12)=");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\n1 for januray");
			break;
		case 2:
			printf("\n2 for febuary");
			break;
		case 3:	
			printf("\n3 for march");
			break;
		case 4:
			printf("\n4 for april");
			break;
		case 5:
			printf("\n5 for may");
			break;
		case 6:
			printf("\n6 for june");
			break;
		case 7:
			printf("\n7 for july");
			break;
		case 8:
			printf("\n8  for auguest");
			break;
		case 9:
			printf("\n9 for septmber");
			break;
		case 10:
			printf("\n10 for october");
			break;
		case 11:
			printf("\n11 for november");
			break;
		case 12:
			printf("\n12 for december");
			break;	
		default: printf("\nInvalid month number");
		
	}
	return 0;
}

