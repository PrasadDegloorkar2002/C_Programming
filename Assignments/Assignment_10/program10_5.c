/* WAP which accept area in square feet and convert it into square meter.
(1 square feet = 0.0929 Square meter)*/
#include<stdio.h>
#include<stdlib.h>
double SquareMeter(int iFeet)
{
    double dSquareMeter = 0.0;
    dSquareMeter = 0.092903 * iFeet;

    return dSquareMeter;
}
int main()
{
    int iValue =0;
    double dRet = 0.0;

    printf("Enter area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Sqaure feet in square meter :%f",dRet);
}