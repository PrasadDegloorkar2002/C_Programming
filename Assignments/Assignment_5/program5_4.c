/* 4] Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5
or neither.*/
#include <stdio.h>
#include <stdlib.h>
void CheckMultipleDivisiblity(int iValue)
{
    if(((iValue % 3)==0) && ((iValue % 5)==0))
    {
        printf("Divisible  by 3 and 5");
    }
    else if(((iValue % 3)==0)) 
    {
        printf("Divisible by only 3");
    }
    else if ((iValue % 5)==0)
    {
        printf("Divisible by only 5");
    }
    else
    {
        printf("It is not divisible by 3 and 5");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    CheckMultipleDivisiblity(iValue);

    return EXIT_SUCCESS;
}