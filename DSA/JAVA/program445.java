class node
{
    public int data;
    public node next;
}

public class program445
{
    public static void main(String A[])
    {
        node head = null;

        node obj1 = null;       // references
        node obj2 = null;
        node obj3 = null;
        
        obj1 = new node();      // Memory allocated
        obj2 = new node();
        obj3 = new node();

        obj1.data = 11;
        obj2.data = 21;
        obj2.data = 51;

        obj1.next = obj2;
        obj2.next = obj3;
        obj3.next = null;

        head = obj1;
    }
}