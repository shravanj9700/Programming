#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int No)                  // 5
        {
            Size = No;                  // 5
            Arr = new int[Size];        // 5 Memory of object is allocated 
        }

        ~ArrayX()                       // Destructor
        {
            delete []Arr;               // Deallocate the array
        }
};

int main()
{
    ArrayX aobj(5);

    return 0;
}