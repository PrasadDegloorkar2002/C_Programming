/* 1]Accept the number of electricity units consumed and calculate the total bill using the following 
slab - wise rates. Each slab rate applies only to units within that slab.*/

#include <stdio.h>
#include <stdlib.h>
void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid Units\n");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
        printf("Bill = %.2f\n", fBill);
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) +
                (iUnits - 100) * 7.0f;

        printf("Bill = %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5.0f) +
                (100 * 7.0f) +
                (iUnits - 200) * 10.0f;

        printf("Bill = %.2f\n", fBill);
    }
}
int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
