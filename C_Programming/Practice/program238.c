#include<stdio.h>

int main()
{
    char *str = "Ganesh";
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    printf("Length od string is : %d\n",iCount);
    
    return 0;
}