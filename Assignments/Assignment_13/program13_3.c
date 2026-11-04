/* WAP which accept number from user and return the count of digits in between 3 and 7.*/
#include<stdio.h>
#include<stdlib.h>
int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}

int main()
{
    int iValue = 0, iRet = 0; 
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}
