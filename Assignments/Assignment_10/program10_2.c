/* WAP which accept width and height of rectangle  from user and calculate its area.
(Area = Wdith * Height) */
#include<stdio.h>
#include<stdlib.h>
double RectArea(float fWdith, float fHeight)
{
    double Area = 0.0;

    Area = fWdith * fHeight;
    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Wdith :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of rectangle is :%.3f",dRet);
}
