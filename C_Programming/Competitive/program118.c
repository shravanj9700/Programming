/*
     Input : 7
    Output : It is digit

     Input : 10
    Output : It is not digit
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(int iDigit)
{
    if(iDigit >= 0 && iDigit <= 9)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the digit : ");
    scanf("%d",&iValue);

    bRet = CheckDigit(iValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}