import java.io.*;

public class BufferIO
{
    public static void main(String[] args) throws IOException
    {
        int ch;

        // FileInputStream fin = new FileInputStream("File1.txt");
        // BufferedInputStream bin = new BufferedInputStream(fin);
        BufferedInputStream bin = new BufferedInputStream(new FileInputStream("File1.txt"));

        // FileOutputStream fout = new FileOutputStream("File2.txt");
        // BufferedOutputStream bout = new BufferedOutputStream(fout);
        BufferedOutputStream bout = new BufferedOutputStream(new FileOutputStream("File2.txt"));

        while((ch=bin.read()) != -1)
        {
            bout.write(ch);
        }

        System.out.println("\033[H\033[2J");
        System.out.println("Copied..!");

        bin.close();
        bout.close();
    }
}