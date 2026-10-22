// 4] Accept two numbers from user and display first number in second number of times.
#include<stdio.h>
void Display(int iNo , int iFrequency)
{
    int iNo2;
    for(iNo2 = 0; iNo2<iFrequency;iNo2++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iVaule = 0;
    int iCnt = 0;
    printf("Enter Number :");
    scanf("%d",&iVaule);

    printf("Enter Frequency :");
    scanf("%d",&iCnt);
    Display(iVaule,iCnt);

    return 0;
}