
#include<stdio.h>
void DisplayR(int iNo)
{
    static int iCnt = 1; 
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
        DisplayR(iNo);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter the frequency :\n");
    scanf("%d",&iValue); 

    DisplayR(iValue);

    printf("End of main\n");
    return 0 ; 

}
