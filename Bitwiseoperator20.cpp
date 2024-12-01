// use or operator 

#include<iostream>
using namespace std ;

int offBit (int iNo , int iPos)
{
    int iMask = 0x1;
    int iResult = 0 ; 

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask ; 
    return iResult ; 
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 
    int iLocation = 0 ; 
     
    cout<<"Enter the number :\n ";
    cin>>iValue; 

    cout<<"Enter the position :\n";
    cin>>iLocation ;

    iRet = offBit(iValue , iLocation );

    cout<<"Bit is on: "<<iRet<<"\n";
    return 0 ; 
}