//3.Write a C program that includes variables , constants , and comments .Declare and use different datatypes(int ,char ,float)and display their values.

#include <stdio.h>

int main()
 {
    // Declare variables
    int age = 25;            // Integer variable
    char grade = 'A';        // Character variable
    float height = 5.8;     // Float variable

    // Declare a constant
    const  float PI = 3.14;  // Constant value
 
    // Display values
    printf("\nAge = %d", age);          
    printf("\nGrade = %c", grade);      
    printf("\nHeight = %.2f", height);  
    printf("\nPI = %.2f", PI);          

    return 0;
}

