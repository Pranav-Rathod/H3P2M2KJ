
/* =============================================================================
    When testing whether an integer is a prime, it is sufficient to try to divide	
    by integers upto the square root of the number being tested. Write a	
    program to use this	approach.
============================================================================== */

import java.util.Scanner;

public class PrimeNumber
{
    public static void main(String[] args)
    {
        Scanner S = new Scanner(System.in);
        int num,flag=0;

        System.out.print("Enter Number : ");
        num = S.nextInt();
        S.close();
        
        for(int i=2 ; i<(int)(Math.sqrt(num)) ; i++)
        {
            if ((num%i) == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            System.out.println(num + " is not prime number");
        }
        else
        {
            System.out.println(num + " is prime number");
        }
    }
}