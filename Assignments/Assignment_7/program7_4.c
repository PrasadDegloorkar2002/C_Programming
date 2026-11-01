/* WAP which accept N from user and print all odd numbers up to N.*/
#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <iNo; iCnt++)
    {
        if ((iCnt % 2) !=0)
        {
            printf("%d\t",iCnt);
        }   
       
    }
}

int main()
{
    int iValue = 0;
    printf(" Enter Number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return EXIT_SUCCESS;
}