
#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1 ; 
    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter the frequency :\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0 ; 

}
