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
        printf(" | %d | -> ",first->data);
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

int LastOccurence(PNODE head, int iNo)
{
    PNODE temp = head;
    int iPos = 1;
    int iLastPos = -1;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            iLastPos = iPos;
        }
        iPos++;
        temp = temp->next;
    }

    return iLastPos;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 121);
    InsertFirst(&head, 110);
    InsertFirst(&head, 51);
    InsertFirst(&head, 51);
    InsertFirst(&head, 10);

    Display(head);

    iRet = LastOccurence(head, 51);

    printf("Position of last occurrence : %d\n",iRet);

    return 0;
} 