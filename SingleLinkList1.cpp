#include<iostream>
using namespace std ;

struct node {
    struct node *next;
    int data ;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SingleLinkedList
{
    public :
        PNODE head ;
        int iCount;

            SingleLinkedList()
            {
                head = NULL;
                iCount = 0 ; 
            }

            void InsertFirst(int no)
            {
                PNODE newn = NULL;
                newn = new node ;
                newn->data = no;
                newn->next=NULL;

                if(head==NULL)
                {
                    head = newn;
                }
                else 
                {
                    newn->next = head;
                    head = newn;
                }
                iCount++;
            }

            void InsertLast(int no)
            {
                PNODE temp = NULL;
                PNODE newn = NULL;

                newn= new NODE;
                newn->data = no;
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
                        temp = temp->next;
                    }
                    temp->next = newn;
                }
                iCount++;
            }

            void InsertatPos(int iPos , int no)
            {
                PNODE temp = NULL;
                PNODE newn = NULL;
                int CountNode = 0 ;
                int i ;

                if((iPos < 1) ||(iPos < CountNode+1))
                {
                    cout<<"Invalid Node ";
                    return ; 
                }
                else if (iPos==1)
                {
                    InsertFirst(no);
                }
                else if (iPos == CountNode+1)
                {
                    InsertLast(no);
                }
                else 
                {
                    newn = new node ;
                    newn->data = no;
                    newn->next = NULL;

                    temp = head ; 

                    for(i=1;i<iPos;i++)
                    {
                       temp = temp->next;
                    }         
                    newn->next = temp->next;
                    temp->next = newn ;                  
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
                else if ((head)->next == NULL)
                {
                    delete head ;
                    head = NULL;
                }
                else 
                {
                    temp = head;
                    head = head->next ;
                    delete temp ;
                }
                iCount--;
            }

            void DeleteLast()
            {
                PNODE temp = NULL;

                if(head == NULL)
                {
                    return ; 
                }
                else if((head)->next == NULL)
                {
                    delete(head);
                    head = NULL;
                }
                else 
                {
                    temp = head;
                    while(temp->next!=NULL)
                    {
                        temp = temp->next;
                    }
                    delete(temp->next);
                    temp->next = NULL;
                }
                iCount--;
            }

            void DeleteatPos(int iPos)
            {
                PNODE temp = NULL;
                PNODE target = NULL;
                int i ; 
                int CountNode = 0 ; 

                if((iPos > 1) || ( iPos < CountNode+1))
                {
                    cout<<"Invalid Node";
                }
                 if(iPos == 1)
                {
                    DeleteFirst();
                }
                else if(iPos == CountNode+1)
                {
                    DeleteLast();
                }
                else 
                {
                    PNODE temp = head;
                    for(i=1;i<iPos;i++)
                    {
                        temp = temp->next;
                    }
                    target = temp->next;
                    temp->next = target ->next ;
                    delete(target);
                }
                iCount--;
            }

            void Display()
            {
                PNODE temp = head;

                while(temp!=NULL)
                {
                    cout<<"  "<< temp->data<<" -> " ;
                    temp = temp->next;
                }
                cout<<"NULL\n";
            }

            int Count()
            {
                return iCount ; 
            }

};

int main()
{
    SingleLinkedList sobj;
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


    return 0;
}
