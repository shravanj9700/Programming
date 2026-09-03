import java.util.*;

class program195
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int KeptDays;
        int fine = 0;

        System.out.println("Enter number of days want to kept");
        KeptDays = sobj.nextInt();

        if(KeptDays < 0)
        {
            System.out.println("Invalid Input");
        }
        else if(KeptDays <= 7)
        {
            System.out.println("No fine applicable for within 7 days");
        }
        else if(KeptDays <= 12)
        {
            fine = (KeptDays - 7)*5;

            System.out.println("Total fine to paid Rs : "+fine);
        }
        else
        {
            fine = (5 * 5) + ((KeptDays - 12) * 10);

            System.out.println("Total fine to be paid: Rs." + fine);
        }
    }
}