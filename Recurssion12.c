//input :4
//output = 4 3 2 1

#include<stdio.h>
void DisplayR(int iNo)
{
    int iCnt = 0 ; 
    if (iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);
    }
}
int main()
{
    int iValue = 0 ; 

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("End the main");
    return 0 ; 


}