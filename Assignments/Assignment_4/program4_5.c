// 5] Accept an integer and determine whether it is divisible by 5 without leaving any remainder.
#include <stdio.h>
#include <stdlib.h>
int CheckDivisibility(int iNo)
{
    if ((iNo%5)==0)
    {
        printf("%d Number is divisible by 5",iNo);
    }
    else
    {
        printf("%d Number is Not divisible by 5",iNo);
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
}