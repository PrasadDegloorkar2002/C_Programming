// 4] Accept one charchter from user and covert case of that charchter.
#include<stdio.h>
char DisplayConvert(char cChar)
{
    if(cChar >= 'a' && cChar <= 'z')
    {
        cChar = (char)(cChar - 32);
    }
    else if(cChar >= 'A' && cChar <= 'Z')
    {
        cChar = (char)(cChar + 32);
    }

}
int main()
{
    char cValue ='\0';
    char cRet = 0;
    printf("Enter Charchter :\n");
    scanf("%c",&cValue);

    cRet = DisplayConvert(cValue);
    printf("Convert charchter :%c",cRet);

    return 0;
}