import java.util.*;

class ArrayX
{
    int Arr[];
    int iSize;

        public ArrayX(int X)
        {
            iSize = X;
            Arr = new int [iSize];
        }

        void Accept()
        {
            Scanner sobj = new Scanner(System.in);
           
            System.out.println("Enter the elements : ");
            
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                Arr[iCnt] = sobj.nextInt();
            }
        }

        void Display()
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Elements of array are : ");

            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }
        }

        int Summation()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
}

class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0, iRet = 0;
       
        System.out.println("Enter number of elements : ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();

        System.out.println("Summation is : "+iRet);


        System.gc();

    }   
}