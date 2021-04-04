
class Student
{
    String name,city;
    int age;
    void printData()
    {
        System.out.println("Name  : " + name);
        System.out.println("City  : " + city);
        System.out.println("Age  : " + age);
    }
}

class Student2
{
    String name, city;
    int age;
    public void getData(String nam, String cit, int ag)
    {
        name = nam;
        city = cit;
        age = ag;
    }
    public void printData()
    {
        System.out.println("Name  : " + name);
        System.out.println("City  : " + city);
        System.out.println("Age  : " + age);
    }
}

class Student3
{
    String name,city;
    int age;

    Student3(String nam, String cit, int ag)
    {
        name = nam;
        city = cit;
        age = ag;
    }
    void printData()
    {
        System.out.println("Name  : " + name);
        System.out.println("City  : " + city);
        System.out.println("Age  : " + age);
    }
}

public class StudentData
{    public static void main(String[] args)
    {
        Student s = new Student();
        Student s2 = new Student();
        s.name = "Pranav";
        s.city = "Rajkot";
        s.age = 22;
        s.printData();
        System.out.println("");
        s2.name = "Naman";
        s2.city = "Ahmedabad";
        s2.age = 18;
        s2.printData();


        System.out.println("\n\n");


        Student2 obj = new Student2();
        Student2 obj2 = new Student2();
        obj.getData("Manthan", "Junagadh", 18);
        obj.printData();
        System.out.println("");
        obj2.getData("Pavan", "Mehsana", 17);
        obj2.printData();
        

        System.out.println("\n\n");


        Student3 stu = new Student3("Tapan","Delhi",19);
        Student3 stu2 = new Student3("Rajan","Puna",22);
        stu.printData();
        System.out.println("");
        stu2.printData();
    }
}