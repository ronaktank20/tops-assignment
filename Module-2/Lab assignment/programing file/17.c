//'Whether the number is a multiple of both 3 and 5

#include <stdio.h>
int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 15 == 0) 
    { 
        printf("\n%d is a multiple of both 3 and 5", number);
    } else 
	{
        printf("\n%d is not a multiple of both 3 and 5", number);
    }
    return 0;
}

