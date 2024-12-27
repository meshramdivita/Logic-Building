#include<iostream>
using namespace std ; 

struct node 
{
    int data ;
    struct node  *next;
    struct node *Prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class DLList
{
    public :
       PNODE head;
       int iCount ;

        DLList()
        {
            head = NULL;
            iCount = 0 ; 
        }
          
        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE ;
            newn->data = no ; 
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            } 
            else 
            {
                newn->next=head;
                head->Prev=newn;
                head= newn;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = no ; 
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else 
            {
                temp = head;

                while(temp->next!=NULL)
                {
                    temp = temp->next ; 
                }
                temp->next = newn;
                newn->Prev = temp;
            }
            iCount++;
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(head==NULL)
            {
                return ; 
            }
            else if((head)->next==NULL)
            {
                delete(head);
                head = NULL;
            }
            else 
            {
                temp = head;
                head = head->next;
                delete((head)->Prev);
                (head)->Prev = NULL;
            }
            iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(head==NULL)
            {
                return ; 
            }
            else if ((head)->next==NULL)
            {
                delete(head);
                head = NULL;
            }
            else 
            {
                temp = head;
                while(temp->next->next!=NULL)
                {
                    temp = temp->next;
                } 
                delete(temp->next);
                temp->next = NULL;
            }
            iCount--;
        }

        void Display()
        {
            PNODE temp = head ;
            while(temp!=NULL)
            {
                cout<<" "<< temp->data << "<=> ";
                temp  = temp->next;
            }
            cout<<"NULL\n";
        }

        int Count()
        {
            return iCount ; 
        }

        void InsertAtPos(int no , int iPos)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;
            int i ; 
            int CountNode = iCount ;

            if((iPos > 1) || (iPos > CountNode+1))
            {
                cout<<"Invalid Node ";
                return ; 
            }
            else if (iPos == 1)
            {
                InsertFirst(no);
            }
            else if (iPos == CountNode+1)
            {
                InsertLast(no);
            }
            else 
            {
                newn = new NODE ; 
                newn->data = no;
                newn->next = NULL;

                for(i=1;i<iPos;i++)
                {
                    temp = temp->next ; 
                }
                newn->next = temp->next ; 
                temp->next->Prev = newn;
                temp->next = newn;
                newn->Prev = temp ; 
            }
            iCount++;
        }

        void DeleteAtLast(int iPos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;
            int i ; 
            int CountNode = iCount;

            if((iPos > 1) || (iPos > CountNode+1))
            {
                cout<<"Invalid Node ";
                return ; 
            }
            else if (iPos == 1)
            {
                DeleteFirst();
            }
            else if (iPos == CountNode+1)
            {
                DeleteFirst();
            }
            else 
            {
                temp = head ; 
                for(i=1;i < iPos ; i++)
                {
                    temp = temp->next;
                }
                temp->next = target->next;
                temp->next->Prev=temp;
                delete(target);
            }
            iCount++;
        }

};

int main()
{
    DLList sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteFirst();
    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteLast();
    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0 ; 
}

