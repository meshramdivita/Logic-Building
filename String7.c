#include<stdio.h>
int CountSmall(char *ptr)
{
    int iCount = 0;
    {
        if(*ptr>='a' && *ptr<='z')
        {
            iCount ; 
        }
        ptr++;
    }
    return *ptr;    
}
int main()
{



    return 0 ; 
}