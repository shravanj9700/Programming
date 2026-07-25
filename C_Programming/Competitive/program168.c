#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\n",i);
        i--;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}