#include<stdio.h>

int Factorial(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        Summation(iNo / 10);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}