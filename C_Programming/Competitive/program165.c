#include<stdio.h>
#include<stdlib.h>

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
        first = first->next;
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

int CountLess(PNODE head, int iNo)
{
    int iCount = 0;

    while(head != NULL)
    {
        if(head -> data < iNo)
        {
            iCount++;
        }
        head = head->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head, 111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = CountLess(head, 50);

    printf("Number is less than 50 : %d\n",iRet);

    return 0;
}