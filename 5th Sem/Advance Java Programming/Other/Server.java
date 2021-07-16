import java.io.DataInputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server
{
    public static void main(String[] args)
    {
        try
        {
            ServerSocket ser = new ServerSocket(1357);
            Socket cli = ser.accept();

            DataInputStream din = new DataInputStream(cli.getInputStream());
            String str = (String)din.readUTF();

            System.out.println(str);

            cli.close();
            ser.close();
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}