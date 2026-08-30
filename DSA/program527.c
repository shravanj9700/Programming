// 4
// 4 * 3 * 2 * 1 = 24

#include<stdio.h>

int Factorail(int iNo)
{
    int iMult = 1;

    while( iNo != 0 )
    {
        iMult = iMult * iNo;
        iNo--;
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet  = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    iRet = Factorail(iValue);

    printf("Facrorial is : %d\n", iRet);

    return 0;
}