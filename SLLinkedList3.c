#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ; 
    struct node *next;
};
int main()
{
    struct node *first = NULL;

    struct node obj1 ;
    struct node obj2 ;
    struct node obj3 ;

    obj1.data = 11; 
    obj2.data = 21; 
    obj2.data = 51; 

    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;

    first = &obj1;

    printf("%d\n",first->data);
    printf("%d\n",first->next->data);
    
    printf("%d\n",first->next->next->data);
        
    return 0 ;  
}