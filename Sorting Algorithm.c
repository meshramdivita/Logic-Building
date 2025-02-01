#include<stdio.h>

void BubbleSort( int arr[] ,  int iNo)
{
    int i , j , temp ; 

    for( i = 0 ; i < iNo ; i++)
    {
        for( j = 0 ; j < iNo - 1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = temp ; 
                temp = arr[j+1];
                arr[j+1] = temp ; 
            }
        }
    }
}

int main()
{
    int  i = 0  , iNo ; 

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    int arr[iNo];
    printf("Enter the Element : ");
    for( i = 0 ; i < iNo ; i++)
    {
        scanf(" %d ",&arr[iNo]);
    }

    BubbleSort(arr , iNo)

    Printf("After the Sorting Element are : ")
    
    for( i = 0 ; i < iNo ; i++)
    {
        printf(" %d " , arr[i]);
    }

    printf("\n");

    return 0 ; 
}