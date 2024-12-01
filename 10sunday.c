// wirte function which is use maximun number 
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iSize)
{
    int iCnt = 0 , iMax = 0 ; 
    iMax = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return max ; 
}
int main()
{
    int *ptr = NULL ;
    float fRet = 0.0f ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf(%d,ptr[iCnt]);
    }
     iRet = Maximun(ptr , iLenght);

    free (ptr);

    return 0 ; 
}

// reversed display 
 void reverseddisplay(int Arr[], int iSize)
 {
    int iCnt = 0 ;
    for(iCnt = iSize-1; iCnt >= 0 ; iCnt --)
    {
        printf("%d\n", Arr[iCnt]);
    }
 }