public class Pyramid
{
    public static void main(String[] args)
    {
        char ch[] = {'1','2','3','4','5','6','7','8','9'};

        for(int i=ch.length ; i>0 ; i--)
        {
            int j=0;
            for(int k=i ; k<=ch.length ; k++)
            {
                System.out.print(ch[j]);
                System.out.print(" ");
                j++;
            }
            System.out.println("");
        }
    }
}