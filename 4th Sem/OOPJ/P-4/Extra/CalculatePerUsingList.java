
/* =============================================================================
    Write a program that calculate percentage marks of the student if marks of
    6 subjects are given.
============================================================================== */

import java.util.*;

public class CalculatePerUsingList
{
    float Sum(List<Integer>list)
    {
        Iterator<Integer> it = list.iterator();

        int sum = 0;

        while(it.hasNext())
        {
            int num = it.next();
            sum += num;
        }

        return sum*100/600;
    }

    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        List<Integer> list = new ArrayList<Integer>(6);

        System.out.print("Enter Marks of Computer: ");
        list.add(s.nextInt());

        System.out.print("Enter Marks of Science: ");
        list.add(s.nextInt());
        
        System.out.print("Enter Marks of Gujarati: ");
        list.add(s.nextInt());

        System.out.print("Enter Marks of Hindi: ");
        list.add(s.nextInt());

        System.out.print("Enter Marks of English: ");
        list.add(s.nextInt());

        System.out.print("Enter Marks of Sanskrit: ");
        list.add(s.nextInt());

        s.close();

        CalculatePerUsingList c = new CalculatePerUsingList();

        float Result = c.Sum(list);

        System.out.print("Your Percentage is " + Result);
        System.out.print(" %");
    }
}