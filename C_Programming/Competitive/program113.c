/*
    Input : iRow = 6        iCol = 6

    Output :    *   *   *   *   *   *
                *               *   *
                *           *       *
                *       *           *
                *   *               *
                *   *   *   *   *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Number of rows and columns should be same \n");
        return;
    }

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j || i == 1 || j == 1 || i == iRow || j == iCol)
            {
                printf("%%\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}