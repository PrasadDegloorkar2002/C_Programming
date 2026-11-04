/* WAP which accept number from user and return multiplication of all digits.*/
#include<stdio.h>
#include<stdlib.h>
int MulDigits(int iNo)
{
    int iDigit = 0;
    int iAns = 1;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iAns = iAns * iDigit;
        iNo = iNo / 10;
    }
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);
    printf("Multiplication of digits :%d",iRet);
    return EXIT_SUCCESS;
}
