#include<stdio.h>

void Display()
{
    printf("Jay Ganesh...\n");

    Display();                  // Infinite Recurssion beacuse there is no stop to Display.
}

int main()
{
    Display();

    return 0;
}