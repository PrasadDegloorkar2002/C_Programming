/* 1] Accept three integers and determine the greatest number among them. The program
must alos work correctly when two or all three numbers are equal*/
#include<stdio.h>
#include<stdlib.h>
void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if ((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        printf("%d This is greatest number",iNo1);
    }
    else if ((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        printf("%d This is greatest number",iNo2);
    }
    else 
    {
        printf("%d This is greatest number",iNo3);
    }  

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enter First Number :");
    scanf("%d",&iValue1);

    printf("Enter Second Number :");
    scanf("%d",&iValue2);

    printf("Enter Third Number :");
    scanf("%d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;

}