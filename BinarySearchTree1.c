#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node 
{
    int data ;
    struct node *lchild ;
    struct node *rchild ;
}NODE,*PNODE , **PPNODE ;

void Insert(PPNODE head , int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)  // tree is empty
    {
         *head = newn;
    }
    else // tree contain at least one node
    {
        temp = *head;

        while(1) // infinited loop
        {
            if(no > temp->data) // greater 
            {
                if(temp->rchild  == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
            }
            else if(no < temp->data) // smaller
            {
                if(temp->lchild == NULL)
                {
                    temp ->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(no == temp->data) // identical
            {
                printf("Unable to nisert as element is duplicate \n");
                free(newn); // aadhi free kr ani mg baher ja 
                break;
            }
        }

    }

}

void Inorder(PNODE head) // call by valure becasue 
{
    if(head!=NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
    }
}


void Preorder(PNODE head)
{
    if(head !=NULL)
    {
        printf("%d\n",head->data);
        Preorder(head->lchild);
        Preorder(head->rchild);
    }
}


void Postorder(PNODE head)
{
    if(head!=NULL)
    {
        Postorder(head->lchild);
        Postorder(head->rchild);
        printf("%d\n",head->data);
    }
}

bool Search(PNODE head,int no)
{
    bool bFlag = false ;

    while(head!=NULL)
    {
        if(no == head->data)
        {
            bFlag = true;
            break;
        }
        else if(no<head->rchild)
        {
            head = head->rchild;
        }
        else if(no < head->data)
        {
            head = head->lchild;
        }
    }

}

int CountNodes(PNODE head)
{
    static int iCount = 0 ;
    if(head!=NULL)
    {
        iCount++;
        CountNodes(head->lchild);
        CountNodes(head->rchild);
    }
    return iCount;
}


int main()
{
    PNODE first = NULL;
    bool bret = false ;

    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);
    Insert(&first,9);
    Insert(&first,18);
    Insert(&first,35);
    Insert(&first,75);

    int iRet = CountNodes(first);
    printf("Number of count %d\n",iRet);
    
/*
    printf("Inoreder traversal \n");
    Inorder(first);

    printf("Preorder traversal \n");
    Preorder(first);

    printf("Postorder traversal \n");
    Postorder(first);

    bret = Search(first,21);
    if(bret == true)
    {
        printf("Element is present in bst\n");
    }
    else 
    {
        printf("There is no such element in BST\n");
    }
    */


    return 0 ; 
}