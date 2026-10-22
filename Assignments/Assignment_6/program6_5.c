/* 5} Accept an employees montly salary and completed years of service. Calculate the bonus
using these rules: more than 10 years of service earns a bonus of 15% of monthly salary: 5
to 10 years earns 10%: less than 5 years earns 5%,Salary must be positive and years of service 
cannot be negative.*/
#include <stdio.h>
#include <stdlib.h>
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input!\n");
        return;
    }
    if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary;
    int iYears;

    printf("Enter monthly salary: ");
    scanf("%f", &fSalary);

    printf("Enter completed years of service: ");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}