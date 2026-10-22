// 5] Accept the input from user and check whether number is even or odd.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven (int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }
}
int main()
{
    int iValue1 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue1);
    bRet = CheckEven(iValue1);
    
    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }    

    return 0;

}