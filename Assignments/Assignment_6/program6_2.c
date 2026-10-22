/* 2] A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years.
Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input*/
#include <stdio.h>
#include <stdlib.h>
void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input");
    }
    else if (fMarks >= 60 && iAge >= 17)
    {
        printf("Student is Eligible for Admission");
    }
    else
    {
        printf("Student is Not Eligible for Admission");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
