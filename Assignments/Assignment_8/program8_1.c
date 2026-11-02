/* WAP which accept number fom user and if number is less than 50 then print small , if is greater than 50 
and less than 100 then print medium, if it is grearter than 100 then print larger  */
#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Entered number is small");
    }
    else if ((iNo > 50) && (iNo <= 100))
    {
        printf("Entered number is medium");
    }
    else
    {
        printf("Entered number is larger");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Number(iValue);
    return EXIT_SUCCESS;

}