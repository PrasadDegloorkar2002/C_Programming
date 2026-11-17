/*WAP which accept distance in kilometer nad convert into meter.
(1 kilometer = 1000 meter)*/
#include<stdio.h>
#include<stdlib.h>
int KMtoMeter(int iNo)
{
    int iKilometer = 1000;
    int iMeter = 0;

    iMeter = iKilometer * iNo;
    return iMeter;

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Meter :%d",iRet);

    return EXIT_SUCCESS;
}