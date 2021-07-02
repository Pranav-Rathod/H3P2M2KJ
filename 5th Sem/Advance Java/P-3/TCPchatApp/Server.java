import java.io.*;
import java.net.*;
import java.util.Scanner;

public class Server
{
    public static void main(String[] args) throws Exception
    {
        Scanner in = new Scanner(System.in);
        ServerSocket server = new ServerSocket(1234);
        Socket client = server.accept();

        DataInputStream din = new DataInputStream(client.getInputStream());
        DataOutputStream dout = new DataOutputStream(client.getOutputStream());

        String input="", output="";

        while(!input.equals("stop"))
        {
            output = (String)din.readUTF();
            System.out.print("Client Says : " + output);
            System.out.println("");
            
            System.out.print("Enter Msg. for Client : ");
            input = in.nextLine();
            dout.writeUTF(input);
            dout.flush();
        }
        in.close();
        din.close();
        dout.close();
        client.close();
        server.close();
    }
}
