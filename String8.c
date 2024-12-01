
#include<stdio.h>


void Display(char *str)
{
    printf("Enter string is :%s\n",str);
    while (*str ! = '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter string :\n");
    scanf("%[^\n]s",Arr);

    Display(Arr);
    return 0 ; 
}


or use for loop 
for (i = 0 ; str[i] ! = '\0';i++)
{
    printf("%c\n",str[i]);
}