#include<stdio.h>
int main()
{
    int count, i;
    float height, weight;
    count=0;
    printf("Enter the height and weight of ten boys:\n");
    for(i=1; i<=10; i++)
    {
        scanf("%f %f", &weight, &height);
        if(weight<50 && height>170)
        count++;
    }
    printf("The number of boys is %d", count);
}