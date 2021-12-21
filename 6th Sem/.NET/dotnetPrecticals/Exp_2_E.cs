using System;

namespace dotnetPrecticals
{
    public class Exp_2_E
    {
        public static void Main()
        {
            Console.Clear();
            Console.Write("Enter Your Number : ");
            int abc = Convert.ToInt32(Console.ReadLine());
            for (int i = abc; i >= 1; i--)
            {
                for (int j = i; j >= 1; j--)
                {
                    Console.Write(" " + i);
                }
                Console.WriteLine();
            }
        }
    }
}
