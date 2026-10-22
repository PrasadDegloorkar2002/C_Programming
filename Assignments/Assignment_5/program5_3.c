/* 3] Accept the marks of a student out of 100 and display the grade according to the 
following criteria. Marks outside 0-100 are invalid*/
#include <stdio.h>
#include <stdlib.h>
void DispalyGrade(float fMarks)
{
    if ((fMarks <=100) && (fMarks >= 90))
    {
        printf("Grade A");
    }
    else if ((fMarks <= 89) && (fMarks >= 75))
    {
        printf("Grade B");
    }
    else if ((fMarks <= 74) && (fMarks >= 60))
    {
        printf("Grade C");
    }
    else if ((fMarks <= 59) && (fMarks >= 40))
    {
        printf("Grade D");
    }
    else if (fMarks <=39)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Marks");
    }   

}
int main ()
{
    float fMarks = 0.0f;
    printf("Enter Marks :");
    scanf("%f",&fMarks);

    DispalyGrade(fMarks);
    return EXIT_SUCCESS;
}