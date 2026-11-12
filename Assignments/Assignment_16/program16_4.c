/* 4] Accept number of rows and number of columns from user and display below pattern. */
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = iRow;
    for (i =1; i <= iRow; i++, iCnt--)
    {
        for (j = 1 ; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Noumber of Rows :");
    scanf("%d",&iValue1);

    printf("Enter Noumber of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
    
}