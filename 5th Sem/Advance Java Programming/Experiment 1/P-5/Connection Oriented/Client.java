import java.io.*;
import java.net.*;
import java.util.Scanner;

public class Client
{
    public static void main(String[] args) throws Exception
    {
        Scanner in = new Scanner(System.in);
        Socket client = new Socket("localhost",1234);

        DataOutputStream dout = new DataOutputStream(client.getOutputStream());
        
        System.out.print("Enter Your String : ");
        String input = in.nextLine();
        dout.writeUTF(input);
        dout.flush();
        
        DataInputStream din = new DataInputStream(client.getInputStream());
        int charcnt = din.readInt();
        int digicnt = din.readInt();
        int space = din.readInt();

        System.out.println("Number of charecter : " + charcnt);
        System.out.println("Number of digits : " + digicnt);
        System.out.println("Number of spaces : " + space);

        in.close();
        din.close();
        dout.close();
        client.close();
    }
}