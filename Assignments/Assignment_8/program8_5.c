/* WAP which accept number from user and display its tabel in reverse order.*/
#include<stdio.h>
#include<stdlib.h>
void TableRev(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iNo * iCnt);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    
    TableRev(iValue);
    return EXIT_SUCCESS;
}