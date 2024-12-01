// related to array
#include<iostream>
using namespace std ; 

int main()
{
    int iLenght = 0 ; 
    int iCnt = 0;
    int *Arr = NULL ;  // data (Characteristics)

    cout<<"Enter of elements that you want to store :\n";
    cin>>iLenght; 

    Arr = new int [iLenght];  // Resource allocation(constructor) 

    // in c language Arr = (int *)malloc(sizeof(int) *iLenght);

    cout<<"Enter the values : \n";
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)// Logic (Function -> Accept())
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"Value from the array are :\n";
    for(iCnt = 0 ; iCnt < iLenght ; iCnt ++) // Logic (Function -> Display())
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete[]Arr;  // resourec deallocation (destructor)
    return 0 ; 
}