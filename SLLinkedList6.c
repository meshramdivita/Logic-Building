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

void Demo1(PNODE head)
{    }
void Demo2 (PPNODE head)
{    }

int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);

    return 0 ; 
}