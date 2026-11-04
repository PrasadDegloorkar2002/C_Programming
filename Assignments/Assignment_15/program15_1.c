/* WAP which accept name from user and print that name.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Name [30];
    printf("Please enter full name : ");
    scanf("%[^\n]", Name);

    printf("Your name is :%s",Name);
    return EXIT_SUCCESS;
}