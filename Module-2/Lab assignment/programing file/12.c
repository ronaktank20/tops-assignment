//12. Write a C program that defines a structure to store a student's details(name, roll number ,and marks).Use an array of structures to store details of 3 students and print them.

#include <stdio.h>
struct Student 
{
    char name[100];
    int rollNumber;
    float marks;
};

int main() 
{	
 struct Student s[3]; 
	int i;
    	for(i=0;i<3;i++) 
	{
        printf("\nEnter name for student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter roll number for student %d: ",i+1);
        scanf("%d",&s[i].rollNumber);
        printf("\nEnter marks for student %d: ", i+1);
        scanf("%f",&s[i].marks);
    }

    	for(i=0;i<3;i++) 
	{
        printf("\nStudent = %d",i+1);
        printf("\nName = %s",s[i].name);
        printf("\nRoll Number = %d",s[i].rollNumber);
        printf("\nMarks = %.2f",s[i].marks);
    }

    return 0;
}


