/* WAP which accept two numbers and check whether numbers are equal or not.*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0; 
    BOOL bRet = TRUE;
    printf("Enter First Number :");
    scanf("%d",&iValue1);

    printf("Enter Second Number :");
    scanf("%d",&iValue2);


    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;

}