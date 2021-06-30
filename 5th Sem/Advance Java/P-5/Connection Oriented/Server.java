import java.io.*;
import java.net.*;

public class Server
{
    public static void main(String[] args) throws Exception
    {
        ServerSocket server = new ServerSocket(1234);
        Socket client = server.accept();

        DataInputStream din = new DataInputStream(client.getInputStream());
        String str = (String)din.readUTF();
        
        int charcnt=0,digicnt=0;
        for(int i=0 ; i<str.length() ; i++)
        {
            if((str.charAt(i) >= 'a' && str.charAt(i) <= 'z') || (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z'))
            {
                charcnt++;
            }
            else if(str.charAt(i) >= '0' && str.charAt(i) <= '9')
            {
                digicnt++;
            }
        }

        DataOutputStream dout = new DataOutputStream(client.getOutputStream());
        dout.writeInt(charcnt);
        dout.writeInt(digicnt);

        din.close();
        dout.close();
        client.close();
        server.close();
    }
}
