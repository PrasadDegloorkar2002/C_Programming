/* WAP which accept total marks & obtained marks from user and calculate percentage.*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }
    else
    {
        fPercentage = ((float)iObtained / iTotal) * 100;
    }
    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks : ");
    scanf("%d", &iValue1);

    printf("Enter Obtained Marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.2f", fRet);

    return EXIT_SUCCESS;
}
