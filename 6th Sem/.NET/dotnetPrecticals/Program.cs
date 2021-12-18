using System;

namespace dotnetPrecticals
{
    public class info
    {
        public string name, sname, contact;

        public virtual void setData()
        {
            Console.Clear();
            Console.Write("Enter a name : ");
            name = Console.ReadLine();
            Console.Write("Enter a Surname : ");
            sname = Console.ReadLine();
            Console.Write("Enter a contect : ");
            contact = Console.ReadLine();
        }

        public virtual void getData()
        {
            Console.WriteLine("\n\nName : {0}",name);
            Console.WriteLine("Surname : {0}",sname);
            Console.WriteLine("Contact : {0}",contact);
        }
    }

    public class student : info
    {
        int sem;

        public override void setData()
        {
            base.setData();
            Console.Write("Enter a Semester : ");
            sem = Convert.ToInt32(Console.ReadLine());
        }
        public override void getData()
        {
            base.getData();
            Console.WriteLine("Semester : {0}",sem);
        }
    }

    public class emp : student
    {
        double salary;

        public override void setData()
        {
            base.setData();
            Console.Write("Enter a salary : ");
            salary = Convert.ToDouble(Console.ReadLine());
        }
        public override void getData()
        {
            base.getData();
            Console.WriteLine("Salary : {0}",salary);
        }
    }



    public class Shape
    {
        public void area(double num1)
        {
            Console.Clear();
            double num = num1;
            Console.WriteLine("Area of Circle is : {0}\n",(3.14*num*num));
        }
        public void area(float num1, float num2)
        {
            float w = num1;
            float l = num2;
            Console.WriteLine("Area of Rectangle is : {0}\n",(w*l));
        }
        public void area(float num1)
        {
            float w = num1;
            Console.WriteLine("Area of Square is : {0}\n",(w*w));
        }
    }
    public class AllPrecticals : Shape
    {
        public void Exp1()
        {
            // 1)   Write a C# console program to know whether a number is even or odd.
            Console.Clear();
            Console.Write("Enter Number : ");
            int num = Convert.ToInt32(Console.ReadLine());

            if(num % 2 == 0)
                Console.WriteLine("Nummber is Even");
            else
                Console.WriteLine("Nummber is odd");
        }

        public void Exp2()
        {
            // 2)	Write a C# console program that implements basic calculation functions (Addition, Subtraction, Multiplication, Division) using switch case.
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
                    Console.WriteLine("\n\nAddition of {0} & {1} is {2}",num1,num2, num1+num2);
                    break;

                case 2:
                    Console.WriteLine("\n\nSubtraction of {0} & {1} is {2}", num1, num2, num1-num2);
                    break;

                case 3:
                    Console.WriteLine("\n\nMultiplication of {0} & {1} is {2}", num1, num2, num1*num2);
                    break;

                case 4:
                    Console.WriteLine("\n\nDivision of {0} & {1} is {2}", num1, num2, num1/num2);
                    break;

                default:
                    Console.WriteLine("Please, Enter valid input..!");
                    break;
            }
        }

        public void Exp3()
        {
            /*
                3)	Write a C# console program to implement following pattern
                *
                * *
                * * *
                * * * * 
            */
            Console.Clear();
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write(" *");
                }
                Console.WriteLine();
            }
        }

        public void numberPyramid()
        {
            /*
                *)	Write a C# console program to implement following number pattern
                    5 5 5 5 5
                    4 4 4 4
                    3 3 3
                    2 2
                    1 
            */
            Console.Clear();
            Console.Write("Enter Your Number : ");
            int abc = Convert.ToInt32(Console.ReadLine());
            for (int i = abc; i >= 1; i--)
            {
                for (int j = i; j >= 1; j--)
                {
                    Console.Write(" "+i);
                }
                Console.WriteLine();
            }
        }

        public void fibonacci()
        {
            /*
                *)	Write a C# console program to genrate fibonacci series
            */
            int a, b, c;
            Console.Clear();
            Console.Write("Enter Your Number : ");
            int abc = Convert.ToInt32(Console.ReadLine());
            Console.Write("Fibonacci Series is : ");
            a = b = 1;
            for (int i = 1; i <= abc; i++)
            {
                c = a + b;
                Console.Write(" "+ c);
                a = b;
                b = c;
            }
        }

        public void ReverseArray()
        {
            Console.Clear();
            Console.Write("Enter array size : ");
            int num = Convert.ToInt32(Console.ReadLine());
            int []arr = new int[num];
            // char []arr = new char[num];

            Console.WriteLine("Enter element of an array : ");

            for(int i=0 ; i < num ; i++)
            {
                Console.Write("element - {0} : ",i+1);
                arr[i] = Convert.ToInt32(Console.ReadLine());
                // arr[i] = Convert.ToChar(Console.ReadLine());
            }

            Array.Reverse(arr);

            Console.Write("Reverse array is : ");
            for(int i=0 ; i<arr.Length ; i++)
            {
                Console.Write(" {0}",arr[i]);
            }
        }

        public void Pelindrom()
        {
            Console.Clear();
            Console.Write("Enter string : ");
            string str = Console.ReadLine();
            char[] arr = str.ToCharArray();

            Array.Reverse(arr);
            string str2 = new string(arr);
            if(str.CompareTo(str2) == 0)
                Console.WriteLine("String is Pelindrome");
            else
                Console.WriteLine("String is not Pelindrome");
        }
    }
    
    public class Program : AllPrecticals
    {
        public static void Main()
        {
            Program obj = new Program();
            Shape sp = new Shape();
            emp em = new emp();

            // obj.Exp1();         // odd-even number

            // obj.Exp2();         // basic calculation
            
            // obj.Exp3();         // "*" pyramid pattern

            // obj.numberPyramid();

            // obj.fibonacci();

            // obj.ReverseArray();

            // obj.Pelindrom();

            // sp.area(10.0);
            // sp.area(10,20);
            // sp.area(10.0F);

            em.setData();
            em.getData();
        }
    }
}