#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ; 
    struct node *prev;
    struct node *next;
};

typedef struct node NODE ;
typedef struct node *PNODE ;
typedef struct node **PPNODE;

void Insertfirst(PPNODE head , int no)
{
   PNODE newn = NULL
   newn = (PNODE)malloc(sieof(NODE));
   newn->data = no;
   newn->next = NULL;

   if(*head==NULL)
   {
    *head = newn
   }
   else 
   { 
    new->next = *head;
    (*head)->prev = newn;
    *head = newn;
   }
}


void Insertlast(PPNODE head , int no , in iPos)
{
   PNODE newn = NULL
   PNODE temp = NULL;

   newn = (PNODE)malloc(sieof(NODE));
   newn->data = no;
   newn->next = NULL;
   newn->temp = NULL;

   if(*head==NULL)
   {
    *head = newn
   }
   else 
   { 
      temp = *head;
      while(temp->next!=NULL)
      {
        temp = temp->next;
      }
      temp->next=newn;
      temp->prev=temp;

   }

}

void Display(PNODE first)
{
    printf("Elements of LinkedList are :\n");

    printf("NULL <=> ")
    while(head !=NULL)
    {
        printf("%d  <=>" head->data);
        head=head->next;
    }
    printf("NULL\n");

}

void Count(PNODE first)
{
    int Count = 0 ; 

    while(head!=NULL)
    {
        Count++;
        head = head-> next;
    }
    return Count;
}

void DeleteFirst(PPNODE first)
{
      PNODE temp = NULL;

      if(*head ==NULL)
      {
        return ;
      }
      else if((*head))

}

void DeleteLast(PPNODE first)
{

}

void DeleteAtPos(PPNODE first , int iPos)
{

    

}

void InsertatPos(PPNODE head,int no , int iPos)
{
    int countnode = 0 ; 
    int i = 0 ; 

    PNODE temp = NULL;
    PNODE 

    countnode = count(*head);

    if((iPos < 1) (iPos>countnode +1 ))
    {
        printf("Invalid position\n");
        return 0 ; 
    }

    if(iPos == 1)
    {
        InsertFirst(head , no)
    }
    else if(iPos == countnode + 1)
    {
        InsertLast(head,no);          
    }
    else 
    {

    }
}
int main()
{
    return 0 ; 
}