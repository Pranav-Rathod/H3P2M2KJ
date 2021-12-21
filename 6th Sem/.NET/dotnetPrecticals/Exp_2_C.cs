using System;

namespace dotnetPrecticals
{
    public class Exp_2_C
    {
        public static void Main()
        {
            Console.Clear();
            Console.Write("\nEnter Number 1 : ");
            int num1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("\nEnter Number 2 : ");
            int num2 = Convert.ToInt32(Console.ReadLine());

            Console.Write("\n\nSimple Calculator\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\nEnter Your Choice : ");
            int ch = Convert.ToInt32(Console.ReadLine());

            switch (ch)
            {
                case 1:
                    // Console.WriteLine("Addition of "+ num1 +" & " + num2 + " is "+(num1+num2));
                    // Console.WriteLine($"Addition of {num1} & {num2} is {num1+num2}");
                    Console.WriteLine("\n\nAddition of {0} & {1} is {2}", num1, num2, num1 + num2);
                    break;

                case 2:
                    Console.WriteLine("\n\nSubtraction of {0} & {1} is {2}", num1, num2, num1 - num2);
                    break;

                case 3:
                    Console.WriteLine("\n\nMultiplication of {0} & {1} is {2}", num1, num2, num1 * num2);
                    break;

                case 4:
                    Console.WriteLine("\n\nDivision of {0} & {1} is {2}", num1, num2, num1 / num2);
                    break;

                default:
                    Console.WriteLine("Please, Enter valid input..!");
                    break;
            }
        }
    }
}
