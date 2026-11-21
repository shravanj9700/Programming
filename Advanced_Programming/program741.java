/* 
    Input : my name is shravan
    Output : My Name Is Shravan

    Input : my NAME is shrAVan
    Output : My Name Is Shravan
*/

import java.util.*;

class program741s
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}