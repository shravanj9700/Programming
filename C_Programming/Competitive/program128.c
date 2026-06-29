/*
    Input : "MarvellouS"
    Output: 6   (8 - 2)

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCount = 0;
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }
    return iSmall - iCapital;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}