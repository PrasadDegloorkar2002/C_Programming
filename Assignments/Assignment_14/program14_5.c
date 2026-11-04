/* WAP which accept number from user and return difference between summation of all its factors and no factors.*/
#include<stdio.h>
#include<stdlib.h>
int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact =0, iSumNonFact = 0 ;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) ==0)
        {
           iSumFact = iSumFact + iCnt ;  
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return (iSumFact - iSumNonFact);
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}