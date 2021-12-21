using System;

namespace dotnetPrecticals
{
    public class Exp_2_D
    {
        public static void Main()
        {
            Console.Clear();
            Console.Write("Enter array size : ");
            int num = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[num];
            // char []arr = new char[num];

            Console.WriteLine("Enter element of an array : ");

            for (int i = 0; i < num; i++)
            {
                Console.Write("element - {0} : ", i + 1);
                arr[i] = Convert.ToInt32(Console.ReadLine());
                // arr[i] = Convert.ToChar(Console.ReadLine());
            }

            Array.Reverse(arr);

            Console.Write("Reverse array is : ");
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write(" {0}", arr[i]);
            }
        }
    }
}
