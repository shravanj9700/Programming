/*
    Input : "JAY Shree Ganesh"
    Output: "JAYSG"

*/

#include<stdio.h>

void StrCopyCapital(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "JAY Shree Ganesh";
    char Brr[30];

    StrCopyCapital(Arr, Brr);

    printf("%s",Brr);

    return 0;
}