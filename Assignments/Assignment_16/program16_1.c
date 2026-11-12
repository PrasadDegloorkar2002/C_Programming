/* Accept number of rows and number of columns from user and display below pattern. */
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j =0;
    char ch = '\0';
    for(i = 1 ; i<= iRow; i++)
    {
        for(j = 1, ch ='A'; j <= iCol; j++, ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1, iValue2;

    printf("Enter Numbers of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}