#include<iostream>
using namespace std ; 
 bool CheckBit (int iNo , int iPos)
 {
    int iMask = 1 ; 
    int iResult  = 0 ; 

    iMask = iMask << (iPos-1); 
    iResult = iNo & iResult ;

    if(iResult == 0)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
 }

 int main()
 {
    int iValue = 0 , iLocation = 0 ; 

    bool bRet = false ; 

    cout<<"Enter the number :\n";
    cin>>iLocation ;

    bRet = CheckBit (iValue , iLocation );

    if(bRet == true )
    {
        cout<<"Bit is On\n";
    }
    else 
    {
        cout<<"Bit is OFF\n";
    }
    return 0 ; 
 }