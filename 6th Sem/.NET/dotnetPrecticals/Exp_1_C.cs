using System;

namespace dotnetPrecticals
{
    public class Exp_1_C
    {
        public static void Main()
        {
            Console.Clear();
            Console.Write("Enter number 1 : ");
            int num1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter number 2 : ");
            int num2 = Convert.ToInt32(Console.ReadLine());

            if (num1 > num2)
                Console.WriteLine("Number 1 is greater");
            else
                Console.WriteLine("Number 2 is greater");
        }
    }
}