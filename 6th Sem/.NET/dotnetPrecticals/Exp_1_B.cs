using System;

namespace dotnetPrecticals
{
    public class Exp_1_B
    {
        public static void Main()
        {
            Console.Clear();
            Console.Write("Enter number 1 : ");
            int num1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter number 2 : ");
            int num2 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine($"Sum of two number is : {num1 + num2}");
        }
    }
}