/* WAP which accept number from user and display its multiplication of factors.*/
#include<stdio.h>
#include<stdlib.h>
int MulFact(int iNo)
{
    int iCnt = 0; 
    int iAns = 1;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iAns = iCnt * iAns;
        }

    }return iAns; 
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}