#include<stdio.h>

void Display()
{
    static int i = 1;

    printf("Jay Ganesh... %d \n",i);            // Stack overflow
    i++;

    Display();
}

int main()
{
    Display();

    return 0;
}