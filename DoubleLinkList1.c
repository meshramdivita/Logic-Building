#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ; 
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL ;
    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = no ; 
    newn->next = NULL;
    newn->prev = NULL;  //$

    if(*head == NULL)
    {
        *head = newn; 
    }
    else 
    {

        newn->next = *head;
        (*head)->prev = newn; // $
        *head=newn;

    }

}


void InsertLast(PPNODE head , int no)
{
    PNODE newn = NULL ;
    PNODE temp = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = no ; 
    newn->next = NULL;
    newn->prev = NULL;  //$

    if(*head == NULL)
    {
        *head = newn; 
    }
    else 
    {
        temp = *head;

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;  //$
    }
}

void Display(PNODE head )
{
    printf("Elements of LinkedList are :\n");

    while(head!=NULL)
    {
        printf(" %d  <=> ",head->data);
        head=head->next;
    }
    printf("NULL\n");

}


int  Count(PNODE head)
{
    int Count = 0 ; 
    while(head!=NULL)
    {
        Count++;
        head = head->next;
    }
    return Count;
}


int main()
{
    PNODE first = NULL;
    int iRet = 0 ; 

    InsertFirst(&first,51);
    InsertFirst(&first,51);
    InsertFirst(&first,51);

    InsertLast(&first,101);
    InsertLast(&first,102);
    InsertLast(&first,103);

    Display(first);
    iRet = Count(first);

    printf("Number of elements are :%d\n",iRet);

    return 0 ; 

}