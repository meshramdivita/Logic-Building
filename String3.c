#include<stdio.h>
int main()
{
    char Arr[30];

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);  // Accept till first space only

    printf("your name is :%s\n",Arr);

    return 0 ; 
}