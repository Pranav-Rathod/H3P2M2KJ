import java.net.*;
import java.util.Scanner;

public class Sender
{
    public static void main(String[] args) throws Exception
    {
        DatagramSocket ds = new DatagramSocket();
        Scanner s = new Scanner(System.in);

        System.out.print("Enter string : ");
        String str = s.nextLine(); 

        InetAddress ip = InetAddress.getByName("localhost"); 

        DatagramPacket dp = new DatagramPacket(str.getBytes(), str.length(), ip, 3000);
        
        s.close();
        ds.send(dp);
        ds.close();
    }
}