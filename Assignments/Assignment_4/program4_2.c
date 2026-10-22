/* 2] WAP in C that accepts an integer from the user and determines whether the enterred number 
even or odd. An even number is completely divisible by 2*/
# include <stdio.h>
#include<stdlib.h>

int CheckEvenOdd(int iNo)
{ 
    if ((iNo % 2)== 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}