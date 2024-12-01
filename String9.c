// How many word in string 

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[30];
    int iRet = 0 ; 

    printf("Enter String is : \n");
    scanf("%[^\n]s",Arr);

    iRet = strlen(Arr);

    printf("String lenght is : %d\n",iRet);

    return 0 ; 
}
