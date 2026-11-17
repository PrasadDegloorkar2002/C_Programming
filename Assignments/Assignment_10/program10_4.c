/*WAP which accept temperature in Farhrenheit and convert it into celisus.
(1 Celsius = (Fahrenheit - 32 ) * (5/9))*/
#include<stdio.h>
#include<stdlib.h>
double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}


int main()
{
    float fValue = 0; 
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius: %.2f", dRet);

    return EXIT_SUCCESS;
}