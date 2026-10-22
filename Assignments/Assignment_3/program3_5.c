// 5] Accept charchter from user and check whether that charchter is vowel (a,e,i,o,u) or not.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
 BOOL CheckVowel(char cChar)
 {
    if (cChar == 'a' || cChar == 'e'||
    cChar == 'i' || cChar == 'o'||
    cChar == 'u' || cChar == 'A' ||
    cChar == 'E' || cChar == 'I' ||
    cChar == 'U')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }

 }
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charchter :");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if (bRet == TRUE)
    {
        printf ("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}