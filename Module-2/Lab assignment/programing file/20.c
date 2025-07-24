//2.Write a C program that takes three numbers from the user and determines.  
//The largest number.
//using if-else :

#include <stdio.h>
int main() 
{
    int num1,num2,num3;
    printf("Enter the number 1:");
    scanf("%d",&num1);
    printf("Enter the number 2:");
    scanf("%d",&num2);
    printf("Enter the number 3:");
    scanf("%d",&num3);

    if (num1>=num2 && num1>=num3)
{
        printf("The largest number is: %d", num1);
 }
	 else if (num2>=num1 && num2>=num3) 
{
        printf("The largest number is: %d", num2);
 }
 else
{
        printf("The largest number is: %d", num3);
 }  
    return 0;
}

