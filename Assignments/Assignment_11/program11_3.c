/* WAP which accept range from user and return addition of all numbers in between that rang.
(Range should contains positive numbers only) */
#include<stdio.h>
#include<stdlib.h>
int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0, iAns = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iAns = iCnt + iAns;
    }
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    if((iValue1 < 0) || (iValue1 > iValue2))
    {
        printf ("Invalid Range\n");
        
    }
    else
    {
        iRet = RangeSum(iValue1,iValue2);
        printf("Addition is :%d",iRet);

    }
    
    return EXIT_SUCCESS;
}