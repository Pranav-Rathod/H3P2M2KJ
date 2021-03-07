import java.util.Scanner;

public class CountVowels
{
    public static void main(String[] args)
    {
        String str;
        int[] vowel = new int[5];

        Scanner S = new Scanner(System.in);
        
        while(true)
        {
            System.out.print("Enter Your String: ");
            str = S.nextLine();

            if(str.equals("quit") || str.equals("Quit"))
            {
                break;
            }
            else
            {
                for(int i=0 ; i<(str.length()) ; i++)
                {
                    if(str.charAt(i) == 'A' || str.charAt(i) == 'a')
                    {
                        vowel[0]++;
                    }
                    else if(str.charAt(i) == 'E' || str.charAt(i) == 'e')
                    {
                        vowel[1]++;
                    }
                    else if(str.charAt(i) == 'I' || str.charAt(i) == 'i')
                    {
                        vowel[2]++;
                    }
                    else if(str.charAt(i) == 'O' || str.charAt(i) == 'o')
                    {
                        vowel[3]++;
                    }
                    else if(str.charAt(i) == 'U' || str.charAt(i) == 'u')
                    {
                        vowel[4]++;
                    }
                }
            }
            System.out.println("a or A is " + vowel[0] + " times");
            System.out.println("e or E is " + vowel[1] + " times");
            System.out.println("i or I is " + vowel[2] + " times");
            System.out.println("o or O is " + vowel[3] + " times"); 
            System.out.println("u or U is " + vowel[4] + " times");
        }
        S.close();
    }
}