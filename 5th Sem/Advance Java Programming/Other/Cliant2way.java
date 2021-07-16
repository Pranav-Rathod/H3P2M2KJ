import java.io.*;
import java.net.Socket;
import java.util.Scanner;

public class Cliant2way
{
    public static void main(String[] args)
    {
        try
        {
            Socket cli = new Socket("localhost",1234);
            DataOutputStream dout = new DataOutputStream(cli.getOutputStream());

            Scanner in = new Scanner(System.in);

            System.out.println("Enter Number 1 : ");
            String num1 = in.nextLine();
            dout.writeUTF(num1);
            dout.flush();

            System.out.println("Enter Number 2 : ");
            String num2 = in.nextLine();
            dout.writeUTF(num2);
            
            DataInputStream din = new DataInputStream(cli.getInputStream());
            String s1 = (String)din.readUTF();
            Integer ans = Integer.parseInt(s1);
            
            System.out.println("Addition is : " + ans);
            in.close();
            dout.close();
            cli.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}