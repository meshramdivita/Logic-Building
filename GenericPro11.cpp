// program404

#include<iostream>
using namespace std ;

class GeneriPro
{
    public:
      int *Arr;
      int iSize;  // (character)

    GenericPro(int lenght)
    ~GenericPro();
    void Accpet()
    void Display()
    int Addition()
};


GenericPro ::(int lenght)
    {
        iSize = lenght;
        Arr = new int [iSize]
    }

void GenericPro :: ~GenericPro()
    {
        delete []Arr;
    }

void GenericPro :: void Accpet()
    {
        int i = 0 ; cout<<"Please enter the value :\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }

void GenericPro :: void Display()
    {
        int i = 0 ; 
        cout<<"Element of the array are :\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i]<<"\n";
        }
    }

void GenericPro :: int Addition()
    {
        int i = 0 ; 
        int iSum = 0 ; 

        for(i=1;i<iSize;i++)
        {
            iSum = iSum + Arr[i];
        }
    }
    return iSum ; 


int main()
{
    GenericPro gobj(5);

    gobj.Accpet();

    gobj.Display();

    iRet = gobj.Addition()
    cin<<"The addition is :"<<iRet<<"\n";
    return 0 ; 
    
}