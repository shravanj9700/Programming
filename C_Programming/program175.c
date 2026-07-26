#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo > 0)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c\t",ch);
            ch++;

            Display(iNo - 1);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}