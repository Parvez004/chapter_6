#include<stdio.h>
int main()
{
    int index;
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);
    index=marks/10;
    switch (index)
    {
    case 10:
    case 9:
    case 8: 
        printf("Your grade is A+");
        break;
    case 7: 
        printf("Your grade is A");
        break;
    case 6: 
        printf("Your grade is A-");
        break;
    case 5: 
        printf("Your grade is B");
        break;
    case 4: 
        printf("Your grade is C");
        break;
    
    default:
        printf("Your grade is F");
        break;
    }
}