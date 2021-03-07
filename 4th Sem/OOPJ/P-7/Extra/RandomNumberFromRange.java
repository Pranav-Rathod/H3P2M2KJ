
/* =============================================================================
    A lottery requires that you select six different numbers from the integers 1 to 49.
    Write a program to do this for you and generate five sets of entries.
============================================================================== */

public class RandomNumberFromRange
{
    public static void main(String ar[])
    {
	    int lucky,i,f=0;
	    int a[]=new int[6];
        System.out.println("Ticket No");
    
	    for(i=0;i<6;i++)
	    {
		    a[i] = (int)((49*Math.random())+1);
	    }
        lucky = (int)((49*Math.random())+1);
    
	    for(i=0;i<6;i++)
	    {
		    System.out.println(+a[i]);
	    }	
	    System.out.println("Lucky Number: "+lucky);
	    for(i=0;i<6;i++)
	    {
		    if(a[i]==lucky)
		    {
			    f=1;
			    break;
		    }
	    }
	    if(f==1)
	    {
		    System.out.println("ticket No." +lucky+ " is winner");	
	    }
	    else
	    {
		    System.out.println("Sorry today no one is winner");
	    }
    }
}