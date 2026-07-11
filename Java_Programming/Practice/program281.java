import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = Arr[i] - 32;   // ERROR   incompatible types: possible lossy conversion from int to char
        }   

        return new String(Arr);
    }
}

class program281
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        String sRet = null;

        System.out.println("Enter the String : ");
        data = sobj.nextLine();

        sRet = strobj.toUpperX(data);

        System.out.println("Updated String is : "+sRet);
    }
}