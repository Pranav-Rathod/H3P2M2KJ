import java.io.DataOutputStream;
import java.net.Socket;

public class Cliant
{
    public static void main(String[] args)
    {
        try
        {
            Socket cli = new Socket("localhost",1357);
            DataOutputStream dout = new DataOutputStream(cli.getOutputStream());

            dout.writeUTF("Hellow Bunty..!");
            dout.flush();
            dout.close();
            cli.close();
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}