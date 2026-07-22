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

void DisplayEven(PNODE head)
{
    PNODE temp = head;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            printf("%d\t", temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 121);
    InsertFirst(&head, 110);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 10);

    Display(head);

    printf("Only Even Numbers are : ");
    DisplayEven(head);

    return 0;
} 