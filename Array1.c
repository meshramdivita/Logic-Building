#include<iostream>
using namespace std ; 

Class Array()
{
    public :
       int *Arr;
       int iSize; 

       Array(int A)
       {
        iSize = A ; 
        Arr = new int [iSize];
       }
       ~Array()
       {
        delete [] Arr;
       }

       void Accept()
       {
          int iCnt = 0 ; 

          cout<<"Value from the array are :\n";
          for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
          {
            cout>>Arr[iCnt];
          }
        }

        void Display()
        {
            int iCnt = 0 ;

            cout<<"Value from the array are :\n";
            for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
            {
                cout>>Arr[iCnt];
            }
        }
}
int main()
{
    int iLenght = 0 ; 
    int iCnt = 0;
    int *Arr = NULL ; 

    cout<<"Enter of elements that you want to store :\n";
    cin>>iLenght; 
     
    Array aobj(iLenght);

    aobj.Accpet();
    aobj.Display();

    return 0 ; 
}