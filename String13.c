// input : Abiut CstAfB
// output : 4 
//AAab

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt = 0 ; 

    while(*str !='\0')
    {
        if(*str == 'A' || *str == 'B' || *str == 'a' || *str == 'b')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt ;
}
int main()
{
    char Arr[30];
    int iRet = 0 ; 

    printf("Enter string :\n");
    scanf("%[^\n]s",Arr);

    iRet = CountCapital(Arr);

    printf("Number is: %d\n",iRet);

    return 0 ;
}