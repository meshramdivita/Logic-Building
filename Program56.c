#include<stdio.h>

int countDigits(int iNo)
{
    int icount = 0;

    if(iNo < 0) // updator 
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        icount++;
        iNo = iNo / 10;
    }
    return icount;
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter number :\n");
    scanf("5d",& iValue);

    iRet = countDigits(iValue);
    printf("Number of Digits are : %d\n",iRet);

    return 0 ;
}
