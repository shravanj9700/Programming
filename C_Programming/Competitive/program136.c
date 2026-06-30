/*
    Input : "Marvellous Multi OS"
            e
    Output: TRUE

    Input : "Marvellous Multi OS"
            W
    Output: FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20] = {0};
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}