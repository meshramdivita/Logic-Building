#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;
    for (iCnt = 0 ; iCnt < iNo ; iCnt ++)
    {
        printf(" * \n");
    } 
}
int main()
{
    int iValue = 0 ;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    Display (iValue);
    return 0 ;
}