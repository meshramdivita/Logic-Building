#include<stdio.h>
int sumDigit(int iNo)
{
    int iDigit = 0 , isum = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    while (iNo > 0)
    {
        iDigit = -iNo % 10;
        isum = isum+iDigit ;
        iNo = iNo / 10;
    }
    return  isum;
}
int main()
{ 
    int iValue = 0 , iRet = 0 ;

    printf("Enter number :\n");
    scanf("%d",&iValue );

    iRet = sumDigit(iValue);
    printf("Number of even digita are :%d\n",iRet);

    return 0 ;

}