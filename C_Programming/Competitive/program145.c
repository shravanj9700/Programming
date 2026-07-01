/*
    Input : "Ganapati Bappa"
            "Moraya"

    Output: "Ganapati Bappa Moraya"        

*/

#include<stdio.h>

void StrConcatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    *src = ' ';     // Space required for concat second string
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = "Ganapati Bappa";
    char Brr[30] = "Moraya";

    StrConcatX(Arr, Brr);

    printf("%s\n",Arr);

    return 0;
}