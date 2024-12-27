#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *next ; 
    struct node *prev;
    int data ;

};

typedef struct node NODE ;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head , int no)
{
    PNODE newn  = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head==NULL)
    {
        *head = newn;
    }
    else 
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}

void InsertLast(PPNODE head , int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL ;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn; 
    }
    else 
    {
        temp = *head ; 
        while(temp->next!=NULL)
        {
            temp = temp->next ;
        }
        temp->next = newn ; 
        newn->prev = temp;      
    }
}

void DeleteFirst(PPNODE head )
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return ;
    } 
    else if ((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
    else 
    {
        *head = (*head)->next ; 
        free ((*head)->prev);
        (*head)->prev = NULL;
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL)
    {
        return ;
    } 
    else if((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
    else 
    {
        temp = *head;
        while(temp->next->next!=NULL)
        {
            temp = temp->next ; 
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE head)
{
    while(head!=NULL)
    {
        printf(" %d <=> " , head->data);
        head =  head->next ; 
    }
    printf("NULL\n");
}

int  Count(PNODE head)
{
    int iCount = 0 ; 
    while(head!=NULL)
    {
        iCount++;
        head = head->next ; 
    }
    return iCount; 
}

void InsertatPos(PPNODE head , int no , int iPos )
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    int CountNode = 0 ; 
    int i ;
    CountNode = Count(head);

    if((iPos < 1) || (iPos > CountNode))
    {
        printf("Invalid Node");
        return ;
    }
    if(iPos == 1)
    {
        InsertFirst(head , no);
    }
    else if(iPos == CountNode+1)
    {
        InsertLast(head,no);
    }
    else 
    {
        temp = *head;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no ; 
        newn->next = NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

    }                          
}

void DeleteatPos(PPNODE head ,int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int CountNode = 0 ; 
    int i ;
    CountNode = Count(*head);

    if((iPos < 1) || (iPos > CountNode+1))
    {
        printf("Invalid Node");
        return ; 
    }
    if(iPos == 1)
    {
        DeleteFirst(head);
    }
    else if(iPos == CountNode+1)
    {
        DeleteLast(head);
    }
    else 
    {
        temp = *head;
        for(i=1;i<iPos-1;i++)
        {
            temp = temp->next ; 
        }
        temp->next = target->next;
        temp->next->prev = temp;
        free(target);
    }
}
int main()
{
    PNODE first = NULL;
    int iRet = 0 ; 

    InsertFirst(&first,51);
    InsertFirst(&first,53);
    InsertFirst(&first,89);


    InsertLast(&first,180);
    InsertLast(&first,820);
    InsertLast(&first,950);

    InsertatPos(&first,75,1);
    Display(first);
    iRet = Count(first);
    printf("Number of element are : %d\n",iRet);

    DeleteatPos(&first,4);
    Display(first);
    iRet = Count(first);
    printf("Number of element are : %d\n",iRet);



    return 0 ; 
}