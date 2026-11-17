#include<stdio.h>
#include<stdlib.h>
void Pattern (int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}

int main ()
{
    int iValue = 0;
    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}