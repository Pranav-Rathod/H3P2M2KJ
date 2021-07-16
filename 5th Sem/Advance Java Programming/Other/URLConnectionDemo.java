import java.net.*;
import java.io.*;

public class URLConnectionDemo
{
    public static void main(String[] args)
    {
        try
        {
            URL url = new URL("https://login.marwadiuniversity.ac.in:553");
            URLConnection uc = url.openConnection();
            InputStream in = uc.getInputStream();

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