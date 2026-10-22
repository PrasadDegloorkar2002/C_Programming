/* 5] Accept a single charchter and determine whether it is an uppercase alphabet, lowercase 
alphabet,digit,or special charchter. Use charchter Comparisons without using library charchte 
classification functions.*/
#include<stdio.h>
#include<stdlib.h>

void CheckCharacter(char cChar)
{
    if ((cChar >= 'A') && (cChar <= 'Z'))
    {
        printf("It is an uppercase alphabet");
    }
    else if ((cChar >= 'a') && (cChar <= 'z'))
    {
        printf("It is a lowercase alphabet");
    }
    else if ((cChar >= '0') && (cChar <= '9'))
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is a special character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacter(cValue);

    return EXIT_SUCCESS;
}
