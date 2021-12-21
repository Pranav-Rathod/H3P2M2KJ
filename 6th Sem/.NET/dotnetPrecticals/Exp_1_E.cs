using System;

namespace dotnetPrecticals
{
    public class Exp_1_E
    {
        public static void Main(string[] args)
        {
            Console.Clear();
            Console.Write("Enter number : ");
            int num = Convert.ToInt32(Console.ReadLine());
            int sum = 0;

            for (int i = 0; i <= num; i++)
            {
                sum = sum + i;
            }
            Console.WriteLine($"Sum is : {sum}");
        }
    }
}