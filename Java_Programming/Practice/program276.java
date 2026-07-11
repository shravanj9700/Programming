import java.util.*;

class program276
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        program280 strobj = new program280();     // ERROR cannot access StringX
        int iRet = 0;

        System.out.println("Enter the String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCaptil(data);
        System.out.println("Number of capial characters : "+iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small characters : "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits are : "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of White Spaces are : "+iRet);

        iRet = strobj.CountSpecial(data);
        System.out.println("Number of special symbols are : "+iRet);
    }
}