/*
     Input : F
    Output : TRUE

     Input : d
    Output : FALSE
*/

// Instead of defining TRUE, FALSE, and BOOL manually,
// we can include <stdbool.h> library and use bool, true, and false directly.


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the characters\n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is not capital");
    }

    return 0;
}