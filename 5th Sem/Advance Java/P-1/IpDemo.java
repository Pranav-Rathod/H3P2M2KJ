import java.net.*;
import java.util.Scanner;

public class IpDemo
{
    public static void main(String[] args) throws Exception
    {
        Scanner in = new Scanner(System.in);

        System.out.println("\033[H\033[2J");

        System.out.print("Enter URL : ");
        String url = in.nextLine();
        in.close();
        
        InetAddress getIP = InetAddress.getByName(url);
        System.out.println("IP is : " + getIP);

        InetAddress sysName = InetAddress.getLocalHost();
        System.out.println("Host Name : " + sysName);

        InetAddress getIpName = InetAddress.getByName("157.240.7.35");
        System.out.println("IP Name is : " + getIpName.getHostName());

        InetAddress[] multiIP = InetAddress.getAllByName("www.google.com");
        for(InetAddress i : multiIP)
        {
            System.out.println("Google : " + i);
        }
    }
}