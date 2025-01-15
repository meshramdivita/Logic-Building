#include<iostream>
using namespace std ;

float AdditionF(float no1,float no2)
{
    int Ans = 0.0f ;
    Ans = no1+no2;
    return Ans;
}

int main()
{
    float iRet = 0.0f ; 

    iRet = AdditionF(11.4f,10.8f);

    cout<<"Addition is :"<<iRet<<"\n";

    return 0 ; 
}