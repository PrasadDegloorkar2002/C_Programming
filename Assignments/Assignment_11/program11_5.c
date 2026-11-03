/* WAP which accept range from user and display all numbers in between that range in reverse order. */
#include<stdio.h>
#include<stdlib.h>
void RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return EXIT_SUCCESS;
}