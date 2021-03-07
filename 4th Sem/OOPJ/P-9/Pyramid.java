
/* =============================================================================
    Write an interactive program to print a string entered in a pyramid form.
    For instance, the string “stream” has to be displayed as follows:
                S
                S	t
                S	t	r
                S	t	r	e
                S	t	r	e   a
                S	t	r	e	a	m
============================================================================== */

public class Pyramid
{
    public static void main(String[] args)
    {
        char ch[] = {'s','t','r','e','a','m'};
        String S = new String(ch);
        int sizze = S.length();

        for(int i=sizze ; i>0 ; i--)
        {
            int j=0;
            for(int k=i ; k<=sizze ; k++)
            {
                System.out.print(ch[j]);
			    System.out.print(" ");
			    j++;
            }
            System.out.println("");
        }
    }
}