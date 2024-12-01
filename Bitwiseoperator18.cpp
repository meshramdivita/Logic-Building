// Accpet No from user check he bit is on or off
#include<iostream>
using namespace std ; 

int offBit (int iNo , int iPos)
{
    int iMask =   ;
    int iResult = 0 ; 

    iResult = iNo & iResult 
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


/*
 1  0  1  1  1   0   0   0 iNo
 1  1  1  0  1   1   1   1 iMask
 1 


*/