// Accpet number from user and check 14 15 and 16 
#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask = 0xe000; // 
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
        cout<<"14 15 16 Bits are ON\n";
    }
    else 
    {
        cout<<"14 15 16 Bits are OFF\n";
    }
    return 0 ; 
}
