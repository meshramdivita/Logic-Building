#include<stdio.h>
void Display()
{
    int i = 0 ; 

    i = i;
    while(i <=4)
    {
        printf("*\n");
        i++;
    }
}

int main()
{
    Display();
    return 0 ;
}