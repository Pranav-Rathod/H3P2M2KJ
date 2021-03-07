import java.util.Scanner;

public class CubeOfNumber
{
    public static void main(String[] args)
    {
        int input;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter Your Number : ");
        input = s.nextInt();
        s.close();

        for(int i=1 ; i<=input ; i++)
        {
            System.out.print("Number is : " +i+ " Cube is : " +i*i*i);
            System.out.println();
        }
    }
}