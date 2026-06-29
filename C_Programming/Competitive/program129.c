/*
    Input : "marvellous"
    Output: TRUE

    Input : "Demo"
    Output: TRUE

    Input : "xyz"
    Output: FALSE
*/

#include<stdio.h>

typedef int BOOL;

#define FALSE 0
#define TRUE 1

BOOL CheckVowel(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        str++;
    }
     return FALSE;
}


int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contains vowels");
    }
    else
    {
        printf("There is no vowels");
    }

    return 0;
}