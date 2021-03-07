
/* =============================================================================
    Write a program to generate a random sequence of capital letters that does
    not include vowels.
============================================================================== */

import java.util.Random;

public class lettersWithoutVowel
{
    public static void main(String[] args)
    {
        char[] vowel = new char[10];
        Random R = new Random();

        for(int i=0 ; i<vowel.length ; i++)
        {
            vowel[i] = (char)(R.nextInt(26) + 'A');
            if (vowel[i] == 'A' || vowel[i] ==  'E' || vowel[i] == 'I' || vowel[i] == 'O' || vowel[i] == 'U')
            {
                while(vowel[i] == 'A' || vowel[i] ==  'E' || vowel[i] == 'I' || vowel[i] == 'O' || vowel[i] == 'U')
                {
                    vowel[i] = (char)(R.nextInt(26) + 'A');
                }
            }
        }

        for(int i=0 ; i<vowel.length ; i++)
        {
            System.out.println(vowel[i]);
        }
    }
}