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

void Insert_at_pos(PPNODE  head,int no , int iPos)
{
    int CountNode = 0 ;
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i ;

    CountNode = Count(*head);

    if(iPos < 1)  (iPos > Count+1 )  // filter 
    {
        printf("Invalid position \n");
        return ; 
    }

    if(iPos == 1 )   // position ==1 
    {
        InsertFirst( head , no);
    }
    else if(iPos == CountNode +1 ) // post == last
    {
        InsertLast( head , no) 
    }
    else         /// In between position 
    {
           // Logic 
           newn = (PNODE)malloc(sizeof(NODE));
           newn->data = no ; 
           newn ->next=NULL;

           temp = *head;

           for(i=1;i<iPos-1 ; i++)
           {
            temp = temp->next;
           }

           newn->next = temp->next;
           temp->next = new;
    }
}


void Delete_at_position(PPNODE  head, int iPos)
{
    int CountNode = 0 ;
    int i = 0 ;

    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head);

    if(iPos < 1)  (iPos > CountNode )  // filter 
    {
        printf("Invalid position \n");
        return ; 
    }

    if(iPos == 1 )   // position ==1 
    {
           DeleteFirst( head );
    }
    else if(iPos == CountNode +1 ) // post == last
    {
        DeleteLast( head ); 
    }
    else         /// In between position 
    {
           // Logic 

           temp = *head;

           for(i=1;i<iPos-1;i++)
           {
            temp = temp->next;
           }
           target = temp->next;

           temp->next = target->next;
           free(target);
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

       Insert_at_pos(&first , 90);

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
      
        Display(first);
        iRet = Count(first);
        printf("Number of elements : %d\n",iRet );

       
    return 0 ; 

}