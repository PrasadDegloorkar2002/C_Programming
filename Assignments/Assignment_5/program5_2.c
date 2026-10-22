/* 2] Accept a year and determine whether it is leap year according to Gregorian calender
rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not 100.*/
#include <stdio.h>
#include <stdlib.h>
void CheckLeapYear(int iYear)
{
    if(((iYear % 400)==0) || (((iYear % 4)==0) && ((iYear % 100) !=0)))
    {
        printf("%d This is leap year",iYear);
    }
    else
    {
        printf("%d This is not leap year",iYear);
    }
}
int main()
{
    int iYear =0;

    printf("Enter the year :");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}