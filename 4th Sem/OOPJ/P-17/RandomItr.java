public class RandomItr
{
    int cnt=0;

    void check() throws ArithmeticException
    {
        int a=8,b,c;

        for(cnt=0 ; cnt<=5000 ; cnt++)
        {
            try
            {
                b = (int)(Math.random()*50)+0;
                c = (a/b);
            }
            catch(ArithmeticException ae)
            {
                throw ae;
            }
        }
    }
    public static void main(String[] args)
    {
        RandomItr ritr = new RandomItr();
        
        try
        {
            ritr.check();
        }
        catch(ArithmeticException ae)
        {
            System.out.println("\033[H\033[2J");
            System.out.println("Exception occure at : " + ritr.cnt + " itration");
        }
    }
}