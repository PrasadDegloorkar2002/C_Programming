#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i = 0; i <= iRow; i++)
    {
        for (j = 0; j <= iCol; j++)
        {
            if ((i == 0) || (i == iRow) || (j == 0) || (j == iCol) || (i == j))
            {
                printf("%d\t",j + 1);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}


int main ()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}