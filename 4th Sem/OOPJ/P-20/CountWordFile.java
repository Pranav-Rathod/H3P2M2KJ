import java.io.*;
import java.util.Scanner;

public class CountWordFile
{
    public static void main(String[] args) throws IOException
    {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String input = s.next();
        s.close();
        // File f = new File(input);
        // Scanner in = new Scanner(f);
        FileInputStream fin = new FileInputStream(input);
        Scanner in = new Scanner(fin);
        System.out.println("Size of file is : " + fin.available());
        
        int word=0;
        
        while(in.hasNext())
        {
            in.next();
            word++;
        }
        
        System.out.println("Number of word is : " + word);
        // System.out.println("Size of file is : " + f.length());
        in.close();
    }
}