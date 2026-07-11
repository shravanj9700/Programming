import java.util.*;

class program261
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter string : ");
        Arr = sobj.nextLine();

        // ERROR
        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
    }
}

// array required, but String found