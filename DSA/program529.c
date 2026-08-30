#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorail(int iNo)
{
    ULONG iMult = 1;

    while( iNo != 0 )
    {
        iMult = iMult * iNo;
        iNo--;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    ULONG iRet  = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    iRet = Factorail(iValue);

    printf("Facrorial is : %lu\n", iRet);

    return 0;
}