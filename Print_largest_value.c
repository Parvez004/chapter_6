#include<stdio.h>
int main()
{
    int a, b, c, x;
    printf("Enter three integer number:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b)
    {
        if(a>c)
        {
            x=a;
        }
        else 
        {
            x=c;
        }
    }
    else 
    {   
         if(c>b)
        {
            x=c;
        }
        else
        x=b;
    }
    printf("Largest number is: %d", x);
    
}