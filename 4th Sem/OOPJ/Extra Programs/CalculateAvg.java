public class CalculateAvg
{
    public static void main(String[] args)
    {
        int i,total=0;
        int avg[] = {2,4,6,8,10};

        for(i=0 ; i<avg.length ; i++)
        {
            total += avg[i];
        }
        System.out.println("Average : " + total/avg.length);
    }
}