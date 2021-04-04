interface sum
{
    int a = 5;
    void Sum();
}

interface add
{
    int b = 55;
    void Add();
}

class Demo implements sum,add
{
    public void Sum()
    {
        System.out.println("Value of a is : " + a);
    }
    public void Add()
    {
        System.out.println("Value of b is : " + b);
    }
    void addition()
    {
        System.out.println("Value of a+b is : " + (a+b));
    }
}

class interfaceDemo
{
    public static void main(String[] args)
    {
        Demo dm = new Demo();
        dm.Sum();
        dm.Add();
        dm.addition();
    }
}