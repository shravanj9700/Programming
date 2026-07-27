/*
    Input : 523
    Output: 325
*/

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;

        Reverse(iNo);
    }

    return iDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    return 0;
}