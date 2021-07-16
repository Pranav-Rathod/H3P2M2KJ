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

        System.out.println("\033[H\033[2J");
        System.out.println("\tServer\n=======================\n\n");

        while(!input.equals("stop"))
        {
            output = (String)din.readUTF();
            System.out.println("Client Says : " + output);
            
            System.out.print("Enter Msg. for Client : ");
            input = in.nextLine();
            System.out.println("");
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
