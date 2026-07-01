/*
    Input : "Jay Shree Ganesh"
    Output: "ay hree anesh"

*/

#include<stdio.h>

void StrCopySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[30] = "Jay Shree Ganesh";
    char Brr[30];

    StrCopySmall(Arr, Brr);

    printf("%s\n",Brr);

    return 0;
}