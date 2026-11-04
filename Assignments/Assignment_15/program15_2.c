/* WAP which accept one number from user and check whether that number is greater than 100 or not.*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if (iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }

}

int main()
{
    int iValue = 0; 
    BOOL bRet = TRUE;
    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;

}