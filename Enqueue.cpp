#include<iostream>

using namespace std ;

struct node
{
    int data ;
    struct node * next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class Enqueue
{
    public:
      PNODE head;
      int iCount;

    void Enqueue(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(head == NULL)
        {
            count<<"empty list";
        }
        else 
        {
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        iCount++;
    }
}