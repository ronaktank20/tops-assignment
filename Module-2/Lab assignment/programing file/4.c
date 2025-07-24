//4.Write a C program that accepts two integers from the user and performs arithmetic ,relational ,and logical operations on them .Display  the results.
    
#include <stdio.h>

int main() 
	{
    int num1,num2;
    
    printf("\nEnter the number 1= ");
    scanf("%d",&num1);
    printf("\nEnter the number 2= ");
    scanf("%d",&num2);

    // Arithmetic operations

    printf("\nArithmetic Operations:\n");
    printf("\n%d + %d = %d",num1,num2,num1+num2);
    printf("\n%d - %d = %d",num1,num2,num1-num2);
	printf("\n%d * %d = %d",num1,num2,num1*num2);
	printf("\n%d / %d = %.2f",num1,num2,(float)num1/(float)num2);
	printf("\n%d %% %d = %d\n",num1,num2,num1%num2);
	
	
    // Relational operations
    
    printf("\nRelational Operations :\n");
    printf("\n%d > %d = %d", num1, num2, num1 > num2);
    printf("\n%d < %d = %d", num1, num2, num1 < num2);
    printf("\n%d == %d = %d", num1, num2, num1 == num2);
    printf("\n%d != %d = %d", num1, num2, num1 != num2);
    printf("\n%d >= %d = %d", num1, num2, num1 >= num2);
    printf("\n%d <= %d = %d\n", num1, num2, num1 <= num2);
   
    // Logical operations
   
    printf("\nLogical Operations :\n");
    printf("(%d > 0) && (%d > 0) = %d\n", num1, num2, (num1 > 0) && (num2 > 0));
    printf("(%d > 0) || (%d > 0) = %d\n", num1, num2, (num1 > 0) || (num2 > 0));
    printf("!(%d > 0) = %d\n", num1, !(num1 > 0));
    printf("!(%d > 0) = %d\n", num2, !(num2 > 0));
    return 0;
}

