/*
    Input : "Jay Shree Ganesh"
    Output: "Jay Shree"

*/

#include<stdio.h>

void StrNCopyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0)) 
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Jay Shree Ganesh";
    char Brr[30];

    StrNCopyX(Arr, Brr, 10);

    printf("%s",Brr);

    return 0;
}

/*
    iCnt is 10, 
    so the function copies only the first 10 characters from the source string to the destination string.

    Source String :  Jay Shree Ganesh

    First 10 characters : J a y _ S h r e e _


    The function copies only the first 10 characters because iCnt is 10. 
    Therefore, the output is Jay Shree .

*/