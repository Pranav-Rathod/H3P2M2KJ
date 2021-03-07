
/* =============================================================================
    Write a program to display a random choice from a set of six choices for 
    breakfast. you could use any set for example
    (scrambled eggs, waffles, fruit, cereal, toast, or yogurt).
============================================================================== */

import java.util.Random;
import java.lang.Math;

public class RandomChoice
{
    public static void main(String[] args)
    {
        int a=0;
        String[] arr = {"Scrambled eggs", "Waffles", "fruit", "cereal", "toast", "yogurt"};
        Random R = new Random();
        int Result = R.nextInt(arr.length);

        System.out.println(arr[Result]);
        a = (int)Math.random()*arr.length;
        System.out.println(a);
    }
}