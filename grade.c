#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f", &marks);
    if(marks<=100 && marks>=80)
    printf("Your grade is A+");
    else if(marks<80 && marks>=75)
    printf("Your grade is A");
    else if(marks<75 && marks>=70)
    printf("Your grade is A-");
    else if(marks<70 && marks>=65)
    printf("Your grade is B+");
    else if(marks<65 && marks>=60)
    printf("Your grade is B"); 
    else if(marks<60 && marks>=55)
    printf("Your grade is B-");
    else if(marks<55 && marks>=50)
    printf("Your grade is C+");
    else if(marks<50 && marks>=45)
    printf("Your grade is C");
    else if(marks<45 && marks>=40)
    printf("Your grade is D");
    else if(marks<40 && marks>=0)
    printf("Your grade is F");
    else
    printf("Error! Try Again");
}