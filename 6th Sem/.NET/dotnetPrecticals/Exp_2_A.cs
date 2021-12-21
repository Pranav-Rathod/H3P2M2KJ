using System;

namespace dotnetPrecticals
{
    public class Exp_2_A
    {
        public static void Main(string[] args)
        {
            Console.Clear();
            Console.Write("Enter string : ");
            string str = Console.ReadLine();
            char[] arr = str.ToCharArray();

            Array.Reverse(arr);

            string str2 = new string(arr);
            if (str.CompareTo(str2) == 0)
                Console.WriteLine("String is Pelindrome");
            else
                Console.WriteLine("String is not Pelindrome");
        }
    }
}