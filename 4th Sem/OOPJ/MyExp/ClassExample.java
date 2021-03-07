import java.util.Scanner;

class A
{
    int aa;
    Scanner s = new Scanner(System.in);

    A(){}

    A(int val)
    {
        aa = val;
    }
        
    public void getData()
    {
        System.out.print("Enter Number: ");
        aa = s.nextInt();
    }

    public void showData()
    {
        System.out.println("Your Number is: " + aa);
    }
}

class B extends A
{

}


public class ClassExample
{
    public static void main(String[] args)
    {
        A objA = new A();
        objA.getData();
        objA.showData();
        A objB = new A(6);
        objB.showData();
    }
}