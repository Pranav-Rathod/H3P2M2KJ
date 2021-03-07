
/* =============================================================================
    A lottery requires that you select six different numbers from the integers 1 to 49.
    Write a program to do this for you and generate five sets of entries.
============================================================================== */

class lottry
{
    public static void main(String[] args)
    {
        int n1,n2,n3,n4,n5,n6;
        for(int i=1; i<=5; i++)
        {
            n1 = (int)(1+Math.random()*49);
            do
            {
                n2= (int)(1+Math.random()*49);
            }while(n2==n1);
            do
            {
                n3 = (int)(1+Math.random()*49);
            }while(n3==n2);
            do
            {
                n4 = (int)(1+Math.random()*49);
            }while(n4==n3);
            do
            {
                n5 = (int)(1+Math.random()*49);
            }while(n5==n4);
            do
            {
                n6 = (int)(1+Math.random()*49);
            }while(n6==n5);
            System.out.println("Set No." + i + "   " + n1 + "\t" + n2 + "\t" + n3 + "\t" + n4 + "\t" + n5 + "\t" + n6);
        }
    }
}