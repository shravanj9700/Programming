/*
    Input : 10  20   30  10   30  40   10  40   10
    Output: 7

    Value to Search : 40

*/

#include<iostream>
using namespace std;

template <class T>
T LastOccurrence(T *Arr, int Size, T No)
{
    T i = 0;
    T iPos = -1;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] == No)
        {
            iPos = i;
        }
    }

    return iPos;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int Ret = LastOccurrence(Arr, 9, 40);

    cout<<"Last Occurrence is : "<<Ret<<endl;

    return 0;
}