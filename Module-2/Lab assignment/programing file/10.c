//10.Write a C program to demonstrate pointer usage .Use a pointer to modify the value of a variable and print the result.

#include <stdio.h>
int main()
 {
    int num = 10;    
    int *ptr;       // Declare a pointer 

    printf("\nOriginal value of num : %d\n",num);
    ptr = &num;
    *ptr = 20;
    printf("Modified value of num using pointer: %d\n", num);

    return 0;
}


