import static java.lang.Math.*;
import static java.lang.System.*;

public class StaticImport
{
    public static void main(String[] args)
    {
        System.out.println("Sqrt of 4 - " + (int)Math.sqrt(4));     //? Without import Static
        System.out.println("Sqrt of 9 - " + (int)sqrt(9));          //! With import Static
        
        System.out.println("Hello, My Name is Pranav");            //? Without import Static
        out.println("Hello, My Name is Pranav");                   //! With import Static
    }
}