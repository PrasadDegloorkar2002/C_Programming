/* WAP to find factorial of give number.*/
#include<stdio.h>
#include<stdlib.h>

int Factorial (int iNo)
{
    int iDigit = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iDigit = 1; iDigit<= iNo; iDigit++)
    {
        iFact = iDigit * iFact;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is:%d\n",iRet);

    return EXIT_SUCCESS;
}