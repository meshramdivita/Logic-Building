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


int main()
{
    queue qobj1;
    queue qobj2;
    queue qobj3;

    qobj1.Enqueue(5);
    qobj1.Enqueue(7);
    qobj1.Enqueue(10);

    qobj2.Enqueue(2);
    qobj2.Enqueue(15);

    qobj3.Enqueue(23);
    qobj3.Enqueue(67);
    qobj3.Enqueue(75);
    qobj3.Enqueue(50);

    return 0 ; 
}