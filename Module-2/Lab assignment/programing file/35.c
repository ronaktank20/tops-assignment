//3.Write a C program that takes a number as input and checks whether it is a palindrome using a function.


#include <stdio.h>
int Palindrome(int num) 
{
    int reversed=0,remainder;
    int original=num;
    while (num != 0) 
	{
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num=num/10;
    }
    return original == reversed;
}

int main() 
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if(Palindrome(num)) 
	{
        printf("\n%d is a palindrome", num);
    } else {
        printf("\n%d is not a palindrome", num);
    }
    return 0;
}


