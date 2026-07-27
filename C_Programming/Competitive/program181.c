/*
    Input : Jay  Shree Ganesh
    Output: 3
*/

#include<stdio.h>

int WhiteSpcaes(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;

        WhiteSpcaes(str);
    }

    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']",Arr);

    iRet = WhiteSpcaes(Arr);

    printf("WhiteSpaces are : %d\n",iRet);

    return 0;
}