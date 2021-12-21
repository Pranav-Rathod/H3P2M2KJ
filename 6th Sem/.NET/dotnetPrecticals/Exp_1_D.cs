using System;

namespace dotnetPrecticals
{
    public class Exp_1_D
    {
        public static void Main()
        {
            Console.Clear();
            Console.Write("Enter units : ");
            int unit = Convert.ToInt32(Console.ReadLine());

            if (unit > 0 && unit < 100)
                Console.WriteLine($"Bill is : {unit * 3} Rs.");
            else if (unit > 100 && unit < 200)
                Console.WriteLine($"Bill is : {unit * 5} Rs.");
            else if (unit > 200 && unit < 500)
                Console.WriteLine($"Bill is : {unit * 10} Rs.");
            else
                Console.WriteLine("Invalid input");
        }
    }
}