/*
    Input : "abcd"
    Output: "dcba"

    Input : "abba"
    Output: "abba"
*/

#include<stdio.h>

void StringRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    end = str;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20] = {0};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    StringRevX(Arr);

    printf("Modified String is : %s\n",Arr);

    return 0;
}