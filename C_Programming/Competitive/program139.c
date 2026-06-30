/*
    Input : "Marvellous Multi OS"
            M
    Output: 11

    Input : "Marvellous Multi OS"
            e
    Output: 4
*/

#include<stdio.h>

int LastOccurence(char *str, char ch)
{
    int i = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = i;
        }
        str++;
        i++;
    }
    return iPos;
}

int main()
{
    char Arr[20] = {0};
    char cValue = 0;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = LastOccurence(Arr, cValue);

    printf("Location of character is : %d\n",iRet);

    return 0;
}