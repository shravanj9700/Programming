/*
    Input : 10  20   30  10   30  40   10  40   10
    Output: 4

    Value to check frequency : 10

*/

#include<iostream>
using namespace std;

template <class T>
T Frequency(T *Arr, int Size, T No)
{
    T Count = 0;
    T i = 0;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] == No)
        {
            Count++;
        }
    }

    return Count;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int Ret = Frequency(Arr, 9, 10);

    cout<<"Frequency is : "<<Ret<<endl;

    return 0;
}