#include<iostream>
using namespace std ;

double Addition(double Arr[], int iSize)
{
    double iSum = 0.0f ; 
    int i = 0 ; // loop cha count ahe 

    for( i = 0 ; i<iSize ; i++)
    {
        iSum = iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    double Brr[] = {10.2f,89.0f,87.5f};
    double iRet = 0.0f; 

    iRet = Addition(Brr,3);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0 ; 
    
}