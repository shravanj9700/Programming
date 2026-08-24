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

        void Accept()                   // Getter method
        {
            int i = 0;

            cout<<"Enter the elements : \n";

            for(i = 0; i < Size; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()                  // Setter method
        {
            int i = 0;

            cout<<"Elements of the array are : \n";

            for(i = 0; i < Size; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    return 0;
}