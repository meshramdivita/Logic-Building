#include<stdio.h>
#include<stdbool.h>

/*
bool LinearSearch(int iNo , int arr[] , int iValue)
{
    int i = 0 ; 

    for( i = 0 ; i < iNo ; i++)
    {
        if(arr[i] == iValue)
        {
            return true;
        }
    }
    return false;
}

bool BiDirectionalSearch( int iNo  , int arr[] , int iValue)
{
    int Start = 0 , End = 0  ; 

    for( Start = 0 , End = iNo - 1 ; Start < End ; Start++ , End--)
    {
        if(arr[Start]  ==  iValue || arr[End] == iValue)
        {
            return true;
        }
    }
    return false ; 
}
*/

bool BinarySearch(int iNo , int arr[] , int iValue)
{
    int start , end , mid ; 

    while (start <= end )
    {
        mid = start + (end - start )/2;

        if(arr[mid] == iValue) // if arr[i] ==  iValue ;
        {
            return true;
            break;
        }

        else if(iValue > arr[mid] )
        {
            start = mid + 1 ;
        }
        else 
        {
            end = mid - 1 ;
        }
    }
    return false ; 
}
int main()
{
    int i ,iNo , iValue ; 

    printf("Enter the Element  : ");
    scanf("%d",&iNo);


    int arr[iNo];
    printf("Enter the Number : \n ");
    for( i = 0 ; i < iNo ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Number which you want to search : \n");
    scanf("%d",&iValue);

    if(BinarySearch( iNo , arr ,  iValue))
    {
        printf("The number is present");
    }
    else 
    {
        printf("The number is not present ");
    }

    return 0 ; 
}