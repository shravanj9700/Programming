// SINGLY CIRCULAR LINKED LIST in JAVA

class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCL
{
    private node first;
    private node last;
    private int iCount;

    public SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = first;

        if(first == null && last == null)
        {
            return;
        }

        do 
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }while(last.next != temp);

        System.out.println();
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        last.next = first;

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            last = newn;
        }

        last.next = first;

        iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node newn = null;
        node temp = null;

        int i = 0;

        if((iPos < 1) || (iPos > iCount+1))
        {
            return;
        }

        if(iPos ==1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(iNo);
        }
        else
        {
            newn = new node(iNo);

            temp = first;

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;


            last.next = first;

            iCount--;
        }
    }

    public void DeleteLast()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            node temp = first;

            while(temp.next != last)
            {
                temp = temp.next;
            }

            last = temp;
            last.next = first;

            iCount--;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;
        node target = null;

        int i = 0;

        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }

        if(iPos ==1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
            }

            target = temp.next;
            temp.next = target.next;

            iCount--;
        }
    }
}

class program459
{
    public static void main(String A[])
    {
        SinglyCL cobj = new SinglyCL();

        int iRet = 0;

        cobj.InsertFirst(51);
        cobj.InsertFirst(21);
        cobj.InsertFirst(11);

        cobj.Display();
        iRet = cobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        cobj.InsertLast(101);
        cobj.InsertLast(111);
        cobj.InsertLast(121);

        cobj.Display();
        iRet = cobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        cobj.DeleteFirst();

        cobj.Display();
        iRet = cobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        cobj.DeleteLast();

        cobj.Display();
        iRet = cobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        cobj.InsertAtPos(105, 4);

        cobj.Display();
        iRet = cobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        cobj.DeleteAtPos(4);

        cobj.Display();
        iRet = cobj.Count();

        System.out.println("Number of nodes are : "+iRet);
    }
}