import java.io.*;
import java.net.*;
import java.util.Scanner;

public class Client
{
    public static void main(String[] args) throws Exception
    {
        Scanner in = new Scanner(System.in);
        Socket client = new Socket("localhost",1234);

        DataInputStream din = new DataInputStream(client.getInputStream());
        DataOutputStream dout = new DataOutputStream(client.getOutputStream());

        String input="", output="";

        while(!input.equals("stop"))
        {
            System.out.print("Enter Msg. for Server : ");
            input = in.nextLine();
            dout.writeUTF(input);
            dout.flush();

            output = (String)din.readUTF();
            System.out.print("Server Says : " + output);
            System.out.println("");
        }
        in.close();
        din.close();
        dout.close();
        client.close();
    }
}