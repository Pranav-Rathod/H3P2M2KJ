class Fly
{
    String name;
    int age;

    Fly()
    {
        System.out.println("Crow");
    }
    Fly(String nam)
    {
        name = nam;
        System.out.println("Name is : " + name);
    }
    Fly(String nam, int ag)
    {
        name = nam;
        age = ag;
        System.out.println("Name is : " + name);
        System.out.println("Age is : " + ag + " Year");
    }
}

public class Bird
{
    public static void main(String[] args)
    {
        Fly f = new Fly();
        System.out.println("");
        Fly f2 = new Fly("Parrot");
        System.out.println("");
        Fly f3 = new Fly("Duck",7);
    }
}