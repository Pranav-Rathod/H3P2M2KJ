import java.util.Scanner;

public class HalfLengthOfString
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String str,HalfStr = "",first = "";

        System.out.print("Enter Your String: ");
        str = in.nextLine();
        in.close();

        System.out.println("Length of Your String is: " + str.length());

        HalfStr = str.substring(str.length()/2);
        first = str.substring(0,str.length()/2);
        
        System.out.println("Length of Your String is: " + HalfStr);
        System.out.println("First of Your String is: " + first);
    }
}