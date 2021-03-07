import java.util.Scanner;

public class MultiplicationTable
{
    public static void main(String[] args)
    {
        int input;
        Scanner s = new Scanner(System.in);

        System.out.print("Enter Your Number : ");
        input = s.nextInt();

        for(int i=1 ; i<=10 ; i++)
        {
            System.out.print(input + " * " + i + " = " + (i*input));
            System.out.println();
        }
        s.close();
    }
}