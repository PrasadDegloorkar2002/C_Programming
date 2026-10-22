// 2] WAP which accept numbers from user and print even factors of that number.
#include<stdio.h>
int  DisplayFactors(int iNo)
{
    int iCnt = 0;
    if (iNo<= 0)
    {
        return iNo = -iNo;
    }
    for (iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if ((iNo%iCnt)== 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}