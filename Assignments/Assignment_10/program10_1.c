/* WAP which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14 (Area = PI * Radius * Radius) */
#include<stdio.h>
#include<stdlib.h>
double CircelArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircelArea(fValue);
    printf("Area of circle is :%.3f",dRet);
}
