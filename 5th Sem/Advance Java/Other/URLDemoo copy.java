import java.io.InputStream;
import java.net.*;

public class URLDemoo
{
    public static void main(String[] args)
    {
        try
        {
            URL url = new URL("https://rog.asus.com");
            System.out.println("Default Port : " + url.getDefaultPort());
            System.out.println("Port : " + url.getPort());
            System.out.println("Path Name : " + url.getPath());
            System.out.println("User Info : " + url.getUserInfo());

            URLConnection urlConnection = url.openConnection();
            InputStream in = urlConnection.getInputStream();

            int i;
            while((i = in.read()) != -1)
            {
                System.out.print((char)i);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}