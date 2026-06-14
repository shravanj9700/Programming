// Input  : 5
// Output : 1   2   3   4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt = iCnt += 1)  // += la apn short hand operator mhnto
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}