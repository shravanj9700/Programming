#include<stdio.h>

void CountUpdate(char *str)
{
    while (*str != '\0')
    {
        if(*str == 'l')
        {
            *str = '-';   
        }
        str++;        
    }  
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    CountUpdate(Arr);

    printf("Updated String is : %s\n",Arr);

    return 0;
}