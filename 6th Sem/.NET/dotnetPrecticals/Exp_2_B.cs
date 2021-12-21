using System;

namespace dotnetPrecticals
{
    public class Exp_2_B
    {
        public static void Main()
        {
            int a, b, c;
            Console.Clear();
            Console.Write("Enter Your Number : ");
            int abc = Convert.ToInt32(Console.ReadLine());
            Console.Write("Fibonacci Series is : ");
            a = b = 1;
            for (int i = 1; i <= abc; i++)
            {
                c = a + b;
                Console.Write(" " + c);
                a = b;
                b = c;
            }
        }
    }
}
