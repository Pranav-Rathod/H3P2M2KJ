
/* =============================================================================
    Write a program that calculate percentage marks of the student if marks of
    6 subjects are given.
============================================================================== */

import java.util.Scanner;

public class CalculatePerUsingArray
{
    public float ArrayPer(int[] array)
    {
        int sum = 0;
        for(int i = 0 ; i < array.length ; i++)
        {
            sum += array[i];
        }
        return sum*100/600;
    }
    
    public static void main(String[] args)
    {
        Scanner i = new Scanner(System.in);

        int[] arr;
        arr = new int[6];

        System.out.print("Enter Marks of Computer: ");
        arr[0] = i.nextInt();

        System.out.print("Enter Marks of Science: ");
        arr[1] = i.nextInt();

        System.out.print("Enter Marks of Gujarati: ");
        arr[2] = i.nextInt();

        System.out.print("Enter Marks of Hindi: ");
        arr[3] = i.nextInt();

        System.out.print("Enter Marks of English: ");
        arr[4] = i.nextInt();

        System.out.print("Enter Marks of Sanskrit: ");
        arr[5] = i.nextInt();

        i.close();

        CalculatePerUsingArray c = new CalculatePerUsingArray();

        float Result = c.ArrayPer(arr);

        System.out.print("Your Percentage is " + Result);
        System.out.print(" %");
    }
}