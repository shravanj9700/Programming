#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public : 
        int *Arr;
        int iSize;

        // Parameterised constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor"<<"\n";

            iSize = X;                  // Characteristics initialization
            Arr = new int[iSize];       // Resource Allocation
        }
        
        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor"<<"\n";
            
            delete []Arr;               // Resource Deallocation
        }
};

int main()
{
    // Static memory allocation for object

    //ArrayX aobj1(5);

    ArrayX *aobj1 = new ArrayX(5);    

    return 0;
}