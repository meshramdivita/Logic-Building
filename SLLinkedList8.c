
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ; 
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL ;
    new = (PNODE)malloc(sizeof(NODE));

    new->data = no ; 
    new->next = NULL ;

    if(*head == NULL)
    {
        *head = newn;
    }
    else 
    {
        newn ->next = *head;
        *head = newn ; 
    }
}



int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51)
    InsertFirst(&first,21);
    InsertFirst(&first ,11);

    return 0 ; 
}