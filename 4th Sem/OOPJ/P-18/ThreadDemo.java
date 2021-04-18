class Printing
{
    synchronized void printNum(int n)
    {
        System.out.println("Start");
        for(int j=n ; j>0 ; j--)
        {
            try
            {
                Thread.sleep(100);
                System.out.print(j + " ");
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
        }
        System.out.println("\nEnd");
    }
}

class ThreadExp implements Runnable
{
    int n;
    Printing pt;
    Thread t;
    ThreadExp(Printing p, int x)
    {
        n=x;
        pt=p;
        t=new Thread(this);
        t.start();
    }
    public void run()
    {
        pt.printNum(n);
    }
}

class ThreadDemo
{
    public static void main(String[] args)
    {
        Printing p = new Printing();
        ThreadExp thx = new ThreadExp(p,15);
        thx.run();
        ThreadExp thx2 = new ThreadExp(p,10);
        thx2.run();
    }
}