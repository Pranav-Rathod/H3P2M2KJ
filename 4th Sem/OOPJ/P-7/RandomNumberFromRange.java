
/* =============================================================================
    A lottery requires that you select six different numbers from the integers 1 to 49.
    Write a program to do this for you and generate five sets of entries.
============================================================================== */

import java.util.Random;

class RandomNumberFromRange
{
    public static void main(String[] args)
    {
        int flag = 0;
        int[] lottery = new int[6];
        Random R = new Random();

        int lucky = R.nextInt(49);

        for(int i=0 ; i<lottery.length ; i++)
        {
            lottery[i] = R.nextInt(49)+1;
        }

        for(int i=0 ; i<lottery.length ; i++)
        {
            do
            {
                lottery[1] = R.nextInt(49)+1;
            }while(lottery[0] == lottery[1]);
            do
            {
                lottery[2] = R.nextInt(49)+1;
            }while(lottery[0] == lottery[2] || lottery[1] == lottery[2]);
            do
            {
                lottery[3] = R.nextInt(49)+1;
            }while(lottery[0] == lottery[3] || lottery[1] == lottery[3] || lottery[2] == lottery[3]);
            do
            {
                lottery[4] = R.nextInt(49)+1;
            }while(lottery[0] == lottery[4] || lottery[1] == lottery[4] || lottery[2] == lottery[4] || lottery[3] == lottery[4]);
            do
            {
                lottery[5] = R.nextInt(49)+1;
            }while(lottery[0] == lottery[5] || lottery[1] == lottery[5] || lottery[2] == lottery[5] || lottery[3] == lottery[5] || lottery[4] == lottery[5]);
        }

        for(int i=0 ; i<lottery.length ; i++)
        {
            System.out.println(lottery[i]);
        }

        for(int i=0 ; i<lottery.length ; i++)
        {
            if(lottery[i] == lucky)
            {
                flag = 1;
                break;
            }
        }

        if(flag==1)
		    System.out.println("ticket No." + lucky + " is winner");
	    else
		    System.out.println("Sorry today no one is winner");
    }
}