#include<iostream>
using namespace std ; 

int ToggleBit(int iNo , int iPos)
{
    int iMask = 0x1;
    int iResult = 0 ; 
    iResult = iNo ^ iMask ; 
    return iResult ;

    iMask = iMask << (iPos -1 ) ; 
    iResult = iNo ^ iMask;   
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;  

    cout<<"Enter the number :\n ";
    cin>>iValue; 

    iRet = ToggleBit(iValue);

    cout<<"Number after bit toggle : "<<iRet<<"\n";
    return 0 ; 
}