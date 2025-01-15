#include<iostream>
using namespace std ;

template<class T>
T AdditionD(T no1,T no2)
{
    T Ans ;
    Ans = no1+no2;
    return Ans;
}

int main()
{
    double iRet = 0.0 ; 

    iRet = AdditionD(11.4,10.5);

    cout<<"Addition is :"<<iRet<<"\n";

    return 0 ; 
}

//program397