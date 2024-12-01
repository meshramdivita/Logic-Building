#include<stdio.h>

int countDigit(int iNo)
{
    int iDigit = 0 , icount = 0;
    if (iNo <0)
    {
        iNo = -iNo;
    }
    while (iNo >0)
    {
        iDigit = iNo % 10;
        icount++;
        iNo = iNo / 10;
    }
    return icount;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter number :\n");
    scanf("%d",iValue);

    iRet = countDigit(iValue);
    printf("Number of Digit are :%d\n",iRet);

    return 0 ; 
}