#include<iostream>
using namespace std ; 

struct node{
    int data ; 
    struct node *next;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

class SinglyLL
{
    public:

        PNODE head ;  // characteris
        int Count ; 
        
        SinglyLL()
        {
            head = NULL ;
            int iCount = 0 ;  
        } 

        void InsertFirt( int no)
        {
            int iCount;
            PNODE newn = NULL;
            newn = new NODE;

            newn ->data = no ;
            newn->next = NULL;

            if(head==NULL)
            {
                head = newn;
            }
            else 
            {
                newn ->next = head
                head=newn;
            }
            iCount++;


        } // bheviours
        void InsertLast(int no){
            int iCount;
            pNode temp = NULL;
            PNODE newn = NULL;
            newn = new NODE;

            newn ->data = no ;
            newn->next = NULL;

            if(head==NULL)
            {
                head = newn;
            }
            else 
            {
                temp = head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newn;
            }
            iCount++;
        }
        void InsertAtPos(int no , int iPos){}
        
        void DeleteLast(){

            PNODE temp = NULL;

            if(head == NULL)
            {
                return ; 
            }
            else if(head->next ==NULL)
            {
                delete head;
                head = NULL;
            }
            else 
            {
                temp = head;

                while(temp->next->next!=NULL)
                {
                    temp = temp->next;
                }
                delete  

                

            }
            iCount--;
        }

        void DeleteFirst(){
            if(head == NULL)
            {
                return ; 
            }
            else if(head->next ==NULL)
            {
                delete head;
                head = NULL;
            }
            else 
            {
                temp = head;

                head = head->next;
                delete temp;
            }
            iCount--;
        }
        void DeleteAtPos(int iPos){}

        void Display(){
            PNODE temp = head;
            cout<<"Elements of LinkedList are \n";

            while(temp!=NULL)
            {
                cout<<" " <<temp->data<<" ->"
            }

        }
        int Count()
        {
            return iCount ; 
        }

};



int main()
{
    SinglyLL sobj ; 

    sobj.InsertFirst(51);
    sobj.InsertFirst(31);
    sobj.InsertFirst(11);

    int iRet = sobj.Count();

    count<<"Number of elemnts are :"<<iRet"\n";
    return 0; 

}