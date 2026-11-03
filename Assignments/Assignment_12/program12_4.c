/* WAP which accept number from user and count frequency of 4 in it.*/
#include<stdio.h>
#include<stdlib.h>
int CountFour(int iNo)
{
    int iDigit = 0, iCount =0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}