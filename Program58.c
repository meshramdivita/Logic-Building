#include<stdio.h>

int countoddDigits(int iNo)
{
    int iDigit = 0 , icount = 0;

    if(iNo < 0)  // updator 
    {
        iNo = - iNo;
    }

    while (iNo > 0);
    {
        iDigit = iNo % 10 ;
        if(iDigit % 2!=0)
        {
            icount ++;
        }
        iNo = iNo / 10;
    }
    return icount ;
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter number :\n");
    scanf("%d",&iValue );

    iRet = countoddDigits(iValue);
    printf("Number of even digita are :%d\n",iRet);

    return 0 ;

}
