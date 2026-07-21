/*
    Input : 10  20   30  10   30  40   10  40   10
    Output: 10  40   10  40   30  10   30  20   10

*/

#include<iostream>
using namespace std;

template <class T>

void Reverse(T *Arr, int Size)
{
    int Start = 0;
    int End = Size - 1;
    T temp = 0;

    while(Start < End)
    {
        temp = Arr[Start];
        Arr[Start] = Arr[End];
        Arr[End] = temp;

        Start++;
        End--;
    }    
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int i = 0;

    for(i = 0; i < 9; i++)
    {
        cout<<Arr[i]<<"\t";
    }

    cout<<endl;

    Reverse(Arr, 9);

    for(i = 0; i < 9; i++)
    {
        cout<<Arr[i]<<"\t";
    }

    return 0;
}