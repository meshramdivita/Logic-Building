// program405

#include<iostream>
using namespace std ;

class Array
{
    public:
      int *Arr;
      int iSize;  // (character)

    Array(int lenght);
    ~Array();
    void Accpet();
    void Display();
    float Addition();
};


Array :: Array(float lenght)
{
    iSize = lenght;
    Arr = new float [iSize]
}

Array :: ~Array()
{
 delete []Arr;
}

void Array :: Accpet()
    {
        int i = 0 ; cout<<"Please enter the value :\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }

void Array :: Display()
    {
        int i = 0 ; 
        cout<<"Element of the array are :\n";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }

float Array :: Addition()
{
    int i = 0 ; 
    float iSum = 0 ; 

    for(i=1;i<iSize;i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum ; 
}

int main()
{
    Array aobj(5);
    float iRet = 0.0f;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}