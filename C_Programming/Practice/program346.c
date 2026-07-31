#include<stdio.h>

typedef unsigned int UINT;

// POSITION 21st and 27th

int main()
{
    UINT iMask = 0x04100000;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated number : %d\n",iResult);

    return 0;
}