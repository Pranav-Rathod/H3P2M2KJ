import java.util.Random;

public class MonthDecimal
{
    public static void main(String[] args)
    {
        Random R = new Random();
        String month[] = {"January","February","March","April","May","June","July","August",
                          "September","October","November","December"};
        double sum = 0;
        double[] decimal = new double[12];
        System.out.println("Random Numbers:");
        for(int i=0 ; i<12 ; i++)
        {
            decimal[i] = 100.0*R.nextDouble() + 1;
            //decimal[i] = ((100.0*Math.random())+1);
            sum += decimal[i];
        }
        double average = sum/decimal.length;
        for(int j=0 ; j<12 ; j++)
        {
            System.out.println(decimal[j]+ " - " +month[j]);
        }
        System.out.println("");
        System.out.println("Sum of decimals are : " +sum);
        System.out.println("Average of decimals are : " +average);
    }
}