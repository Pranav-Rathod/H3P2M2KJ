import java.io.InputStream;
import java.net.*;

public class URLDemoo
{
    public static void main(String[] args)
    {
        try
        {
            URL url = new URL("https://www.instagram.com/rathod_pranav/");

            HttpURLConnection httpUrl = (HttpURLConnection)url.openConnection();
            
            System.out.println("\033[H\033[2J");

            for(int j=1; j<=8 ; j++)
            {
                System.out.println(httpUrl.getHeaderFieldKey(j) + " = " + httpUrl.getHeaderField(j));
            }
            System.out.println("\n");
            httpUrl.disconnect();

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