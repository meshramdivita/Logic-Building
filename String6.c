#include<stdio.h>

void Display(char *ptr)
{
    while (*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
}
int main()
{
    char Arr[30];
    printf("Enter your name :\n");
    scanf("%[^\n]s",Arr);  // Accept till first space only
    
    Display(Arr);

    return 0 ; 
}