/* 4] Accept three integer values representing the lengths of the side of a triangle. Determine
whether they can form a valid triangle. All sides must be positive, and the sum of any two sides 
must be greater than the third side. */
#include <stdio.h>
#include <stdlib.h>

void CheckTriangleValidity(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid Triangle\n");
    }
    else if (iSide1 + iSide2 > iSide3 &&
             iSide1 + iSide3 > iSide2 &&
             iSide2 + iSide3 > iSide1)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}
int main()
{
    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangleValidity(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
