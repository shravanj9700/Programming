import java.util.Scanner;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)    // या कोड मध्ये input जरी 12 असले तरी यामध्ये 12 सोडून सर्वात मोठा 
                                                    // factor 6 आहे त्यामुळे तो 6 लाच थांबतो 
                                                    // आणि program कमी iterations मध्ये काम करणार.
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program47
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

// Time Complexity : O(N / 2)
// Where N >= 0