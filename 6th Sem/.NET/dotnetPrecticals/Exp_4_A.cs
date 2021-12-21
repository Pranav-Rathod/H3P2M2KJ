using System;

namespace dotnetPrecticals
{
    public class Exp_4_A
    {
        public interface Area
        {
            void area();
        }

        public class Ract : Area
        {
            float w, l;
            public void area()
            {
                Console.Clear();
                Console.Write("Enter width : ");
                w = float.Parse(Console.ReadLine());
                Console.Write("Enter height : ");
                l = float.Parse(Console.ReadLine());
                Console.ForegroundColor = ConsoleColor.Cyan;
                Console.WriteLine($"Area of Rectangle is : {w * l}", Console.ForegroundColor);
                Console.ForegroundColor = ConsoleColor.Gray;
            }
        }
        public class Circle : Area
        {
            float r;
            public void area()
            {
                Console.Write("\nEnter width : ");
                r = float.Parse(Console.ReadLine());
                Console.ForegroundColor = ConsoleColor.Cyan;
                Console.WriteLine($"Area of Circle is : {3.14 * r * r}");
                Console.ForegroundColor = ConsoleColor.Gray;
            }
        }
        public class Square : Area
        {
            float l;
            public void area()
            {
                Console.Write("\nEnter length : ");
                l = float.Parse(Console.ReadLine());
                Console.ForegroundColor = ConsoleColor.Cyan;
                Console.WriteLine($"Area of Circle is : {l * l * l * l}");
                Console.ForegroundColor = ConsoleColor.Gray;
            }
        }

        public static void Main()
        {
            Ract rct = new Ract();
            rct.area();
            Circle c = new Circle();
            c.area();
            Square sq = new Square();
            sq.area();
        }
    }
}
