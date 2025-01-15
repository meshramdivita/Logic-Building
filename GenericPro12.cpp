// program404

#include<iostream>
using namespace std ;

template <class T>
class Array
{
    public:
      T *Arr;
      T iSize;  // (character)

    Array(int lenght);
    ~Array();
    void Accpet();
    void Display();
    T Addition();
};

template<class T>
Array<T>::Array(int lenght)
    {
        iSize = lenght;
        Arr = new T[iSize];
    }

template<class T>
Array<T>:: ~Array()
    {
        delete []Arr;
    }

template<class T>
void Array<T>:: void Accpet()
    {
        int i = 0 ; cout<<"Please enter the value :\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }

template<class T>
void Array<T> :: void Display()
    {
        int i = 0 ; 
        cout<<"Element of the array are :\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i]<<"\n";
        }
    }
template<class T>
T Array<T>::Addition()
    {
        int i = 0 ; 
        T iSum = 0 ; 

        for(i=1;i<iSize;i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum ; 
    }

int main()
{
    Array<int> aobj(5);
    int iRet = 0 ; 

    aobj.Accpet();

    aobj.Display();

    iRet = aobj.Addition();
    cout << "The addition is: " << iRet << "\n";
    return 0 ; 
    
}