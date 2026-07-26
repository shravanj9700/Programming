/*
    Input : 5
    Output: 5   *   4   *   3   *   2   *   1   *

*/

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(iNo >= i)
    {
        printf("%d\t*\t",iNo);
        iNo--;

        Display(iNo);
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