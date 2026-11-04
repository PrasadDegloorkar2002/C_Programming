/* WAP which accept three numbers and print its multiplications.*/
#include<stdio.h>
#include<stdlib.h>


int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    if(iNo1 != 0)
    {
        iAns = iAns * iNo1;
    }

    if(iNo2 != 0)
    {
        iAns = iAns * iNo2;
    }

    if(iNo3 != 0)
    {
        iAns = iAns * iNo3;
    }

    return iAns;
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0 ; 
    int iRet = 0;

    printf("Enter Three Numbers :");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    
    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("%d",iRet);

    return EXIT_SUCCESS;

}