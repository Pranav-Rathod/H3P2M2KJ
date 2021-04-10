import java.util.Random;
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;

public class MonthDecimalUsingList
{
    double Sum(List<Double>list)
    {
        int i = 0;
        Iterator<Double> it = list.iterator();

        double sum = 0;

        while(it.hasNext())
        {
            double num = list.get(i);
            sum += num;
            i++;
        }

        return sum;
    }

    public static void main(String[] args)
    {
        int i = 0;
        double num=0,sum=0;
        Random R = new Random();
        List<String> month = new ArrayList<String>();
        List<Double> decimals = new ArrayList<Double>(12);
        Iterator<Double> it = decimals.iterator();
        
        month.add("January");
        month.add("February");
        month.add("March");
        month.add("April");
        month.add("May");
        month.add("June");
        month.add("July");
        month.add("August");
        month.add("September");
        month.add("October");
        month.add("November");
        month.add("December");

        while(i != 12)
        {
            decimals.add(100.0*R.nextDouble()+1);
        }

        MonthDecimalUsingList M = new MonthDecimalUsingList();
        double ans = M.Sum(decimals);


        while(it.hasNext())
        {
            System.out.println(month.get(i) + " - " + decimals.get(i));
            i++;
        }

        System.out.println("Sum of decimals are : " +ans);
        System.out.println("Average of decimals are : " +ans/decimals.size());
    }
}