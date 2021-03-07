
/* =============================================================================
    Write a program to generate a random sequence of capital letters that does
    not include vowels.
============================================================================== */

import java.util.Random;

public class lettersWithoutVowel
{
    public static void main(String a[])
    {
	    int i;
	    Random r = new Random();
		char c[] = new char[5];
	    for(i=0;i<5;i++)
	    {
		    c[i]=(char)(r.nextInt(26) + 'A');
	    }
	    for(i=0;i<5;i++)
	    { 
		    switch(c[i])
		    {
			    case 'A':
			        System.out.println("Sorry this letter is vowel");
			        break;
			    case 'E':
			        System.out.println("Sorry this letter is vowel");
			        break;
			    case 'I':
			        System.out.println("Sorry this letter is vowel");
			        break;
			    case 'O':
			        System.out.println("Sorry this letter is vowel");
			        break;
			    case 'U':
			        System.out.println("Sorry this letter is vowel");
			        break;
			    default:
 			        System.out.println(c[i]);
   			        break;
		    }
		}
	}
}