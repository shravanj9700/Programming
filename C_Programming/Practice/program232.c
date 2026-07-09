#include<stdio.h>

int main()
{
    char str[] = {'J', 'a', 'y', ' ', 'G', 'a', 'n', 'e', 's', 'h', '\0'};  // remove garbage from '\0' implecitly

    printf("%s\n",str);

    return 0;
}  