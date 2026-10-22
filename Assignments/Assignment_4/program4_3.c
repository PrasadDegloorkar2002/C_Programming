/* 3] WAP in C Accept twp integer and determine which number is greater.
If both numbers are equal. display an appropriate message.*/
#include<stdio.h>
#include<stdlib.h>

int FindGreater(int iNo1 , int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf ("%d Number is Greater",iNo1);
    }
    else if (iNo1 == iNo2)
    {
        printf ("Both Number is Equal");
    }
    else
    {
        printf ("%d Number is Greater ",iNo2);
    }
    

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number :");
    scanf("%d",&iValue1);

    printf("Enter Second Number :");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);
    return EXIT_SUCCESS;
}