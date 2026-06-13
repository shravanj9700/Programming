import java.util.Scanner;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)    // या कोड मध्ये जर input 12 दिले तर iCnt 1 ते 11 पर्यन्त जाणार 
                                            // आणि print 1 ते 6 होणार 
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program46
{
    
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);

       int iValue = 0;

       System.out.println("Enter number : ");
       iValue = sobj.nextInt();
       
       NumberX nobj = new NumberX();

       nobj.DisplayFactors(iValue);
    }
}

// Time Complexity : O(N)
// Where N >= 0