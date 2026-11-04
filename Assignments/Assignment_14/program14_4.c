/* WAP which accept number from user and return summation of all its  no factors.*/
#include<stdio.h>
#include<stdlib.h>
int SumNonFact(int iNo)
{
    int iCnt = 0, iAns =0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) !=0)
        {
            iAns = iAns + iCnt ;
        }
    }
    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}