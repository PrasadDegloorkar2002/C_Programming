/* WAP which accept number from user and display all no factors.*/
#include<stdio.h>
#include<stdlib.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <=iNo ; iCnt++)
    {
        if ((iNo % iCnt) != 0)
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

    NonFact(iValue);
    return EXIT_SUCCESS;
}