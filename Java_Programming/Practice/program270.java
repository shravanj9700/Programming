import java.util.*;

class StringX
{
    public int CountCaptil(String str)
    {
        int i = 0, iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program270
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter the String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCaptil(data);

        System.out.println("Number of capial characters : "+iRet);
    }
}