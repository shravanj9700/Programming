// Doubly LL in Generic

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node * next;
    struct node * prev;
};

template <class T>
class DoublyLL
{
    private:
        struct node<T> *first;       // characteristics
        int iCount;                 // characteristics

    public:
        DoublyLL();                 // Declarations of function
        void Display();
        int Count();
        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, T iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(T iPos);
};

template <class T>
DoublyLL<T> :: DoublyLL()              // name of constructor function.
{
    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyLL<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = this->first;

    cout<<"NULL <=> ";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

template <class T>
int DoublyLL<T> :: Count()
{
    return this->iCount;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;
}

template <class T>
void DoublyLL<T> :: InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    this->iCount++;
}

template <class T>
void DoublyLL<T> :: InsertAtPos(T iNo, T iPos)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    T i = 0;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new struct node<T>();

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

template <class T>
void DoublyLL<T> :: DeleteFirst()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLL<T> :: DeleteLast()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(T iPos)
{
    struct node<T> *temp = NULL;

    T i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        this->iCount--;
    }
}

int main()
{
    DoublyLL <int> dobj;

    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    dobj.InsertAtPos(105, 4);

    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    return 0;
}