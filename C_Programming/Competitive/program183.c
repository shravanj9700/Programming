/*
    Input : JayGANESH
    Output: 2
*/

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str > '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;

        Small(str);
    }
    return iCount;
}

int main()
{
    char Arr[20];

    int iValue = 0;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}