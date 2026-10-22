/*1] WAP in C that accepts an integer from the user and determines whether the enterred number 
is positive,negative or zero */

#include <stdio.h>
#include <stdlib.h>

int CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf ("Positive Number");
    }
    else if (iValue == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative Number");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}