
public class CalculatePerUsingCLA
{
    public static void main(String[] args)
    {
        int[] marks = new int[6];
        int total=0;

        for(int i=0 ; i<marks.length ; i++)
        {
            marks[i] = Integer.parseInt(args[i]);
            total += marks[i];
        }
        System.out.println("Percentage is : " + (total*100)/(args.length*100) + "%");
    }
}