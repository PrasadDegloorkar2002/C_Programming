/* WAP which accept number from user and check whether it contains 0 in it or not.*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;  
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }
    return EXIT_SUCCESS;
}