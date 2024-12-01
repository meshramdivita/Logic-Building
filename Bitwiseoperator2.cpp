#include<iostream>
using namespace std; 

void DisplayBinar(int iNo )
{
    int Digit = 0 ; 

    while(No!=0)
    {
        Digit = No % 2;
        cout << Digit; 
        No = No/2 ;
    }
    cout <<"\n";
}
int main()
{
    int No = 0 ; 
    int iValue = 0 ; 
    cout<<"Enter number :\n";
    cin>>iValue;
    DisplayBinary(iValue);

    return 0 ; 
}