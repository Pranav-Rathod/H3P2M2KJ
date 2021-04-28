import java.io.FileInputStream;
import java.io.IOException;

class FileCli
{
    public static void main(String[] args) throws IOException
    {
        FileInputStream in = new FileInputStream(args[0]);
        int size = in.available();

        int i;
        char c;

        for(i=0 ; i<size ; i++)
        {
            c = (char)in.read();
            System.out.print(Character.toLowerCase(c));
        }
    }
}