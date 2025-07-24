//Using Switch statement 

#include<stdio.h>
int main ()
{
	int grade;
	float marks;
	printf("\nenter the marks:");
	scanf("%f",&marks);
	if(marks>90)
	{
		grade=1;
	}
	else if(marks>75 && marks<=90)
	{
		grade=2;	
	}
	else if(marks>50 && marks<=75)
	{
		grade=3;
	}
	else
	{
		grade=4;
	}
		switch(grade)
		{
			case 1:
				printf("\ngrade for A");
				break;
			case 2:
				printf("\ngrade for B");
				break;
			case 3:
				printf("\ngrade for C");
				break;
			case 4:
				printf("\ngrade for D");
				break;		
		}
		return 0;
}
