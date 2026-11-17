#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i =1 ; i <= iRow; i++)
    {
        for (j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        
        }
        printf("\n\n");
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