#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter Consumption Unit: ");
    scanf("%d", &unit);
    if(unit>=0 && unit<=200)
    bill=unit*0.50;
    else if(unit>200 && unit<=400)
    {
        unit=unit-200;
        bill=unit*1;
    }
    else if(unit>400 && unit<=600)
    {
        unit=unit-200;
        bill=unit*2.3;
    }
    else if(unit>600)
    {
        unit=unit-200;
        bill=unit*3.90;
    }
    else
    {
        printf("\nError! Please Try Again");

    }
    if(unit>=0)
    printf("\nElectricity Bill=%f", bill);

}