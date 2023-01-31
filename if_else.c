#include<stdio.h>
int main()
{
    int a, b, c, d;
    float ratio;
    printf("Enter four integer number:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(c-d!=0)
    {
        ratio=(float)(a+b)/(float)(c-d);
        printf("\nRatio=%f", ratio);
    }
    return 0;
}