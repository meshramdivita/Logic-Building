 // Display even element 
 
#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[] , int iSize)
{
    int iCnt = 0 ; 

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt ]% 2 )== 0 )
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf(%d,ptr[iCnt]);
    }
     Even(ptr , iLenght);

    free (ptr);

    return - ; 
}
    



// Count Even element .
int CountEven(int Arr[], int iSize)
{
    int iCnt = 0 ; 
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
           iCount++;
        }
    }
    return iCount ; 
}

int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf(%d,ptr[iCnt]);
    }
     Even(ptr , iLenght);

    free (ptr);

    return 0 ; 
}


//Addition odd elementes  program 85
#include<stdio.h>
#include<stdlib.h>

int AdditionEven(int Arr[] , int iSize)
{
    int iCnt = 0 , icount = 0 , iCount = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum ;
}
int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf(%d,ptr[iCnt]);
    }
     Even(ptr , iLenght);

    free (ptr);

    return 0 ; 
}





//  Addition of Even number and odd number .
 # include<stdio.h>
 #include<stdlib.h>

 void AdditionEvenOdd(int Arr[] , int iSize)
 {
    int iCnt = 0 , iSumEven= 0 , int iSumOdd = 0  ;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt ]%2)==0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else 
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Addition of even number : %d\n",   )
   printf("Addition of odd number :%d\n",);

 }

int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf("%d",ptr[iCnt]);
    }
    AdditionEvenOdd(ptr , iLenght);

    free (ptr);

    return 0 ;
}
    
//  
 # include<stdio.h>
 #include<stdlib.h>

 void Frequency(int Arr[] , int iSize)
 {

    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    { 
        if(Arr[iCnt] == 10)
        {
            Frequency ++
        }
        return iFrequency; 
    }
 }    
 
int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf("%d",ptr[iCnt]);
    }
    Frequency(ptr , iLenght);
    printf("Frequency od 10 is :%d\n",iRet);

    free (ptr);

    return 0 ;
}

*/

# include<stdio.h>
 #include<stdlib.h>

 void Frequency(int Arr[] , int iSize , int iNo)
 {

    int iCnt = 0 ;
    int iFrequenccy = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    { 
        if(Arr[iCnt] == iNo)
        {
            Frequency ++
        }
    }
    return iFrequency;
 }    
 
int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf("%d",ptr[iCnt]);
    }
    iRet = Frequency(ptr , iLenght);
    printf("Frequency od 10 is :%d\n",iRet);

    free (ptr);

    return 0 ;
}

///

# include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>

 boolean Search(int Arr[] , int iSize)
 {
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    { 
        if(Arr[iCnt] == 10)
        {
            break;
        } 
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else 
    {
        return true; 
    }
 }    
 
int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; bool bRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf("%d",ptr[iCnt]);
    }
     bRet = Search(ptr , iLenght);
     if(bRet == true )
     {
        printf("Element is present :")
     }
     else
     {
        printf("Number is not present: ");
     }
    free (ptr);

    return 0 ;
}

//  searhcing program 

# include<stdio.h>
 #include<stdlib.h>

 void search(int Arr[] , int iSize)
 {

    int iCnt = 0 ;
    bool bFlag = false ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    { 
        if(Arr[iCnt] == 10)
        {
            bFlag = true;
            break ;
        }
    }
    return bFlag  ;
 }    
 
int main()
{
    int *ptr = NULL ;
    int iLenght = 0 , iCnt = 0 ; iRet = 0 ;

    printf("Enter number of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the elemets:\n");
    for(iCnt = 0 ; iCnt <iLenght ; iCnt++)
    {
        scanf("%d",ptr[iCnt]);
    }
    search(ptr , iLenght);
    printf("Frequency od 10 is :%d\n",iRet);

    free (ptr);

    return 0 ;
}

// Calculate average value 
#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[] , int iSize)
{
    int iCnt = 0 , icount = 0 , iCount = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);
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
     Even(ptr , iLenght);

    free (ptr);

    return 0 ; 
}
// program by tpe casting
#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[] , int iSize)
{
    int iCnt = 0 , icount = 0 , iCount = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);  // type casting
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
     Even(ptr , iLenght);

    free (ptr);

    return 0 ; 
}