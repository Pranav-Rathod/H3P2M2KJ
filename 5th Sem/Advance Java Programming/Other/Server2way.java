import java.io.*;
import java.net.*;

public class Server2way
{
    public static void main(String[] args) throws Exception
    {
        ServerSocket ss = new ServerSocket(1234);
        Socket s = ss.accept();

        DataInputStream din = new DataInputStream(s.getInputStream());
        String s1 = (String)din.readUTF();
        Integer n1 = Integer.parseInt(s1);
        System.out.println("Number 1 is : " + n1);

        String s2 = (String)din.readUTF();
        Integer n2 = Integer.parseInt(s2);
        System.out.println("Number 2 is : " + n2);
        Integer ans = n1 + n2;


        DataOutputStream dout = new DataOutputStream(s.getOutputStream());
        String str = ans.toString();
        dout.writeUTF(str);
        ss.close();
        s.close();
    }
}