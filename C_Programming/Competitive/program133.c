/*
    Input : "Marvellous Multi OS"
    Output: "mARVELLOUS mULTI oS"

*/

#include<stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}