// Accpet 2 bit in function 

#include<iostream>
using namespace std ; 

bool CheckBit(int iNo)
{
    int iMask = 0x2;
    int iResult = 0 ; 
    iResult = iNo & iMask;

    if(iResult == 0)  // if we put iMask then return true return flase 
    {
        return false  ;  // result is zero
    }
    else 
    {
        return true ;  // reult id non zero
    }
}
int main()
{
    int iValue = 0 ; 
    bool bRet = false ; 

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bit id ON\n";
    }
    else 
    {
        cout<<"Bit is OFF\n";
    }
    return 0 ; 
}
