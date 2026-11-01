/* WAP which accept N from user and print first 5 mutiples of N.*/
#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
           
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