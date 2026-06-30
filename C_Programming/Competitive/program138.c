/*
    Input : "Marvellous Multi OS"
            M
    Output: 0

    Input : "Marvellous Multi OS"
            e
    Output: 4
*/

#include<stdio.h>

int FirstOccurence(char *str, char ch)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return i;
        }
        str++;
        i++;
    }
    return -1;
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

    iRet = FirstOccurence(Arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}