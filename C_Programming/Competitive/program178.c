/*
    Input : Hello
    Output: 5
*/

#include<stdio.h>

int StrlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;

        StrlenX(str);
    }

    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%s",Arr);

    iRet = StrlenX(Arr);

    printf("Number of characters are : %d\n",iRet);

    return 0;
}