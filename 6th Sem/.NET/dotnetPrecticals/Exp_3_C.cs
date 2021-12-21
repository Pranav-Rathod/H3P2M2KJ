using System;

namespace dotnetPrecticals
{
    public class Exp_3_C
    {
        public class Apartment
        {
            public int aptNumber;
            public string balcType;
            public Apartment() { }

            public Apartment(int num)
            {
                aptNumber = num;
                // balcType = str;
            }

            public void display()
            {
                Console.WriteLine($"Apartment no : {aptNumber}");
                Console.WriteLine($"Balcony type : {balcType}");
            }
        }

        public class bhk1 : Apartment
        {
            public bhk1(int num) : base(num)
            {
                // aptNumber = num;
                balcType = "Rect";

            }
        }

        public class bhk2 : bhk1
        {

            public bhk2(int num) : base(num)
            {
                // aptNumber = num;
                balcType = "Rounded";
            }
        }

        public class bhk3 : bhk2
        {

            public bhk3(int num) : base(num)
            {
                // aptNumber = num;
                // balcType = "Rounded";
            }
        }

        public static void Main()
        {
            bhk1 b1 = new bhk1(1);
            b1.display();
            bhk2 b2 = new bhk2(2);
            b2.display();
            bhk3 b3 = new bhk3(3);
            b3.display();
        }
    }
}
