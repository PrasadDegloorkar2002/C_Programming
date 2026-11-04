/* WAP which accept number from user and display its factors in desecnding order.*/
#include<stdio.h>
#include<stdlib.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo-1; iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number :");
    scanf("%d",&iValue);

    FactRev(iValue);
    return EXIT_SUCCESS;
}