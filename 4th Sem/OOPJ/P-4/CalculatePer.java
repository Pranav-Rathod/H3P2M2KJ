
/* =============================================================================
    Write a program that calculate percentage marks of the student if marks of
    6 subjects are given.
============================================================================== */

import java.util.Scanner;

class CalculatePer
{
    public static void main(String[] args)
    {
        Scanner i = new Scanner(System.in);

        System.out.print("Enter Marks of Computer: ");
        int Computer = i.nextInt();

        System.out.print("Enter Marks of Science: ");
        int Science = i.nextInt();

        System.out.print("Enter Marks of Gujarati: ");
        int Gujarati = i.nextInt();

        System.out.print("Enter Marks of Hindi: ");
        int Hindi = i.nextInt();

        System.out.print("Enter Marks of English: ");
        int English = i.nextInt();

        System.out.print("Enter Marks of Sanskrit: ");
        int Sanskrit = i.nextInt();

        i.close();
        i.close();

        float Result = (Computer + Science + Gujarati + Hindi + English + Sanskrit) * 100 / 600;

        System.out.print("Your Percentage is " + Result);
        System.out.print(" %");
    }
}