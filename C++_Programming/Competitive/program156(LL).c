#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }

    printf("NULL\n");
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

bool Search(PNODE first, int iNo)
{
    while(first != NULL)
    {
        if(first->data == iNo)
        {
            return true;
        }

        first = first->next;
    }

    return false;
}


int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head, 111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    bRet = Search(head, 51);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    return 0;
}