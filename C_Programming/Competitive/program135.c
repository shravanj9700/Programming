/*
    Input : "Jay"
    Output: 0

    Input : "Jay  Ganesh"
    Output: 2

*/

#include<stdio.h>

int CountWhiteSpaces(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpaces(Arr);

    printf("%d\n",iRet);

    return 0;
}