import java.util.Scanner;

public class Marks
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

        i.close();

        float Result = (Computer + Science + Gujarati) / 3;

        System.out.print("Your Average is " + Result);
    }
}