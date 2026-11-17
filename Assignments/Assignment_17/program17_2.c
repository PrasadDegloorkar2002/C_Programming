#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;
    
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d\t",j*2);
            }
            else
            {
                printf("%d\t",j*2 - 1);
            }
        }
        printf("\n\n");
    }

}
int main()
{
    int iVlaue1 = 0, iVlaue2 = 0;

    printf("Enter Number of Rows :");
    scanf("%d",&iVlaue1);

    printf("Enter Number of Columns :");
    scanf("%d",&iVlaue2);

    Pattern(iVlaue1,iVlaue2);

    return EXIT_SUCCESS;
}