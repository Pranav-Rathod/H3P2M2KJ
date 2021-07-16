import java.io.*;
import java.net.*;

class urlDemo {
    public static void main(String[] args) throws Exception
    {
        // URL u = new URL("https://rog.asus.com/us/");
        URL u = new URL("https://login.marwadiuniversity.ac.in:553");

        URI uri = new URI("https://Pranav@www.geeksforgeeks.org");
        File f = new File("abc.txt");
        if (f.exists()) {
            URI ur = f.toURI();
            System.out.println(ur);
        }
        System.out.println("User info : " + uri.getUserInfo());
        System.out.println("is it Absolute : " + uri.isAbsolute());


        // System.out.println("\033[2H\033[J"); //! Print "Windows PowerShell" at the top most side
        // System.out.println("\033[H\033[2J");
        System.out.println("Protocol Name is : " + u.getProtocol());
        System.out.println("Host Name is : " + u.getHost());
        System.out.println("Port Num. is : " + u.getPort());
        System.out.println("User info is : " + u.getUserInfo());
        System.out.println("Default Port Name is : " + u.getDefaultPort());
        System.out.println("Path Name is : " + u.getPath());

    }
}