// 5678
// 8 7 6 5

#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;         // static is removed

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
        Display(iNo);       // tail recurssive
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}