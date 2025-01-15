// program403

#include<iostream>
using namespace std;

class Array
{
    public:
      int *Arr;
      int iSize;  // (character)

    Array(int lenght)
    {
        iSize = lenght;
        Arr = new int[iSize];
    }

    ~Array()
    {
        delete []Arr;
    }

    void Accpet()
    {
        int i = 0 ; cout<<"Please enter the value :\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        int i = 0 ; 
        cout<<"Element of the array are :\n";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }

    int Addition()
    {
        int i = 0 ; 
        int iSum = 0 ; 

        for(i=1;i<iSize;i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum ;
    } 
};

int main()
{
    Array aobj(5);
    int iRet = 0 ;

    aobj.Accpet();
    aobj.Display();

    iRet = aobj.Addition();
    cout<<"The addition is :"<<iRet<<"\n";

    return 0 ; 
    
}