/*
    iRow = 4
    iCol = 4

    @   #   #   #
    %   @   #   #
    %   %   @   #
    %   %   %   @

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        // Filter for Diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid Parameters");
            System.out.println("Number of rows and columns should be same");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if( i== j)
                {
                    System.out.print("@\t");
                }
                else if(i > j)
                {
                    System.out.print("%\t");
                }
                else
                {
                    System.out.print("#\t");
                }   
            }
            System.out.println();
        }
    }
}

class program219
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        Pattern pobj = new Pattern();

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Colunmns : ");
        iValue2 = sobj.nextInt();

        pobj.Display(iValue1, iValue2);
    }
}