

//input :4
//output = 4 3 2 1

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0 ; 
    while(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
    }
}
int main()
{
    int iValue = 0 ; 

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End the main");
    return 0 ; 


}