/*
    Input : 523
    Output: 30
*/

#include<stdio.h>

int Mult(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;

        Mult(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Multiplication of digits are : %d\n",iRet);

    return 0;
}