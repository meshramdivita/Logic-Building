#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ; 
    struct node *next;
}

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head , int no) 
{
    PPNODE newn = NULL;

    newn = (PNODE)malloc (sizeof(NODE));
    newn->data=no
    newn->next=NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else 
    {
        newn->
    }
}
void InsertLast(PPNODE head,int no)
{
    PPNODE newn = NULL;
    PNODE = temp = NULL;

    newn = (PNODE)malloc (sizeof(NODE));
    newn->data=no
    newn->next=NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else 
    {
        temp =*head;

        while(temp->next!=NULL)
        {
            temp->next=newn;
        }
    }
}


void Display(PNODE head)
{
    printf("Elemets of linklist are ..");

    while(*head!=NULL)
    {
        printf("%d",head->data)         
        head=head->next;
    }
    printf("NULL\n");
}


void Count(PPNODE head)
{
    int count = 0 ; 
    while(*head!=NULL)
    count++;
    head=head->next;
}

void DeleteFirst(PPNODE head)
{ 
    PNODE temp = NULL;

    if(*head==NULL)
    {
        return ;
    }
    if(*head->next==NULL)
    {
      free(*head);
      *head=NULL;
    }
    else 
    {
        temp = *head;
        *head=(*head)->next;
        free(temp;)
    }
}

void DeleteLast(PPNODE head)
{ 
    
    PNODE temp = NULL;

    if(*head==NULL)
    {
        return ;
    }
    if(*head->next==NULL)
    {
      free(*head);
      *head=NULL;
    }
    else 
    {
        temp = *head;

        while(temp ->nextnext!=NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}


int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
     InsertFirst(&first,21);
      InsertFirst(&first,11);

     InsertFirst(&first,051);
      InsertFirst(&first,751);
       InsertFirst(&first,151);

       Display(first);
       iRet =Count(first);
       printf("Number of elements are :%d\n",iRet);
       DeleteFirst(&first)

       Display(first);
       iRet =Count(first);
       printf("Number of elements are :%d\n",iRet);
       DeleteFirst(&first)

       Display(first);
       iRet =Count(first);
       printf("Number of elements are :%d\n",iRet);

       Display(first);
       iRet =Count(first);
       printf("Number of elements are :%d\n",iRet);
    struct node  *

}