import java.util.Scanner;

public class CheckVowel
{
    public static void main(String[] args)
    {
        int consonants = 0, vowels = 0, space = 0;
        Scanner in = new Scanner(System.in);
        String s;

        System.out.print("Enter Your String: ");
        s = in.nextLine();


        for(int i=0 ; i<s.length() ; i++)
        {
            char ch = s.charAt(i);
            if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
            {
                vowels++;
            }
            else if(ch == ' ')
            {
                space++;
            }
            else
            {
                consonants++;
            }
        }

        /*for(char ch : s.toCharArray())
        {
            if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
            {
                vowels++;
            }
            else if(ch == ' ')
            {
                space++;
            }
            else
            {
                consonants++;
            }
        }*/

        in.close();

        System.out.println("Consonants are : " + consonants);
        System.out.println("Vowels are : " + vowels);
        System.out.println("Spaces are : " + space);
    }
}