using System;

namespace dotnetPrecticals
{
    public class Exp_3_A
    {
        public class Shape
        {
            public void area(double num1)
            {
                Console.Clear();
                double num = num1;
                Console.WriteLine("Area of Circle is : {0}\n", (3.14 * num * num));
            }
            public void area(float num1, float num2)
            {
                float w = num1;
                float l = num2;
                Console.WriteLine("Area of Rectangle is : {0}\n", (w * l));
            }
            public void area(float num1)
            {
                float w = num1;
                Console.WriteLine("Area of Square is : {0}\n", (w * w));
            }
        }

        public static void Main()
        {
            Shape sp = new Shape();

            sp.area(10.0);
            sp.area(10,20);
            sp.area(10.0F);
        }
    }
}
