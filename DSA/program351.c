#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    printf("%d\n",sizeof(obj));     // 16       %lu  same way 
                                    // 4(int) + 4(paddding) + 8(pointer)

    return 0;
}