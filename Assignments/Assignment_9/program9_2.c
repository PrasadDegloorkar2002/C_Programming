/* Accept amount in US dollar and return its corresponding value in Indian currency. 
Consider 1$ as 70 rupees. */
#include<stdio.h>
#include<stdlib.h>
int DollarToINR(int iNo)
{
    int iCnt = 70;
    int iAns = 0;

    iAns = iCnt * iNo;
    return iAns;

}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number of USD :\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is :%d",iRet);

    return EXIT_SUCCESS;
}