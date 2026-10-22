/* 3] Accept the total purchase amount and calculated the final payable amount after applying 
the following discount. Negative purchase amounts are invalid.*/
#include <stdio.h>
#include <stdlib.h>

void CalculatePayableAmount(float fAmount)
{
    float fDiscount = 0.0f;
    float fPayableAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase Amount");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }
    if (fAmount >= 0)
    {
        fPayableAmount = fAmount - (fAmount * fDiscount / 100.0f);

        printf("Payable Amount = %.2f",fPayableAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount: ");
    scanf("%f", &fAmount);

    CalculatePayableAmount(fAmount);

    return EXIT_SUCCESS;
}
