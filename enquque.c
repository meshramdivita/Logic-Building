#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void enqueue(PPNODE head,int no) // InsertFirst
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

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
    }
}

int dequeue(PPNODE head) // DeleteFirst
{
    PNODE temp = NULL ;

    int no = -1;

    if(*head == NULL)
    {
        printf("Queue is empty\n");
    }
    
    else if((*head)->next==NULL)
    {
        no = (*head)->data;
        free(*head);
        *head = NULL;
    }
    else 
    {
        no = (*head)->data;
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    return no;
}

void Display(PNODE head)
{
    printf("elements Queue are is :");
    while(head!=NULL)
    {
        printf(" %d\n", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0 ;

    while(head!=NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount ; 
}


int main()
{
    PNODE first = NULL; // Add this in main


    int iRet = 0 ;

    enqueue(&first, 51); // Line 83
    enqueue(&first, 21);
    enqueue(&first, 11);

    Display(first); // Line 87

    iRet = pop(&first); // Line 88

    printf("Pop element is : %d\n",iRet);


    Display(first); // Line 87

    iRet = pop(&first);
    printf("Pop element is %d\n",iRet);

    return 0 ; 
}