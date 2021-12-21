using System;

namespace dotnetPrecticals
{
    public class Exp_3_B
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
                Console.WriteLine("\n\nName : {0}", name);
                Console.WriteLine("Surname : {0}", sname);
                Console.WriteLine("Contact : {0}", contact);
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
                Console.WriteLine("Semester : {0}", sem);
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
                Console.WriteLine("Salary : {0}", salary);
            }
        }

        public static void Main()
        {
            emp em = new emp();

            em.setData();
            em.getData();
        }
    }
}
