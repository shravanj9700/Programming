/*
    Input : 10  20   30  10   30  40   10  40   10
    Output: 5

    Value to Search : 40

*/

#include<iostream>
using namespace std;

template <class T>
T FirstOccurrence(T *Arr, int Size, T No)
{
    T i = 0;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] == No)
        {
            return i;
        }
    }
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int Ret = FirstOccurrence(Arr, 9, 40);

    cout<<"First Occurrence is : "<<Ret<<endl;

    return 0;
}