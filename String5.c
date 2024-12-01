#include<stdio.h>
int main()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter your name :\n");
    scanf("%[^\n]s",Arr);  // Accept till first space only
    
    while(*ptr !='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }

    return 0 ; 
}