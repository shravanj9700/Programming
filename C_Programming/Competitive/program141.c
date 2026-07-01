/*
    Input : "Jay Ganesh"
    Output: "Jay Ganesh"

*/

#include<stdio.h>

void StrCopyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Jay Ganesh";
    char Brr[30];               // EMPTY string

    StrCopyX(Arr, Brr);

    printf("%s\n",Brr);         // Jay Ganesh

    return 0;
}