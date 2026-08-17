class node
{
    public int data;
    public node next;
}

public class program444
{
    public static void main(String A[])
    {
        node newn = null;       // reference without allocated memory

        newn = new node();      // Memory is allocated

        newn.data = 11;
        newn.next = null;

        System.out.println(newn.data);
        System.out.println(newn.next);
    }
}