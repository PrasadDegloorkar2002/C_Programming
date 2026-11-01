#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt =-iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main ()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}