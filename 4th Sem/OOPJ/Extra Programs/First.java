abstract class A
{
    abstract void display();
}

class B extends A
{
    void display()
    {
        System.out.println("Call me from B");
    }
}

public class First 
{
    public static void main(String[] args)
    {
        B b = new B();
        b.display();
        
        A a;
        a = b;
        a.display();
    }
}
