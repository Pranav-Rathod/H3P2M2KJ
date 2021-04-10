abstract class shape
{
    protected int x,y;
    shape(int a, int b)
    {
        x = a;
        y = b;
    }
    abstract void show();
    abstract void move(int a , int b, int c, int d);
}

class Line extends shape
{
    int x1,y1;
    Line(int a, int b, int c, int d)
    {
        super(a,b);
    }
    void show()
    {
        System.out.println("X : " + x);
        System.out.println("Y : " + y);
        System.out.println("X1 : " + x1);
        System.out.println("Y1 : " + y1);
    }
    void move(int a, int b, int c, int d)
    {
        x = a;
        y = b;
        x1 = c;
        y1 = d;
    }
}

class Circle extends shape
{
    int radius;
    Circle(int a, int b, int c)
    {
        super(a,b);
        radius = c;
    }
    void show()
    {
        System.out.println("X : " + x);
        System.out.println("Y : " + y);
        System.out.println("Radius : " + radius);
    }
    void move(int a, int b, int c, int d)
    {
        x = a;
        y = b;
        radius = c;
    }
}

class Rectangle extends shape
{
    int len,wi;
    Rectangle(int a , int b, int c, int d)
    {
        super(a,b);
        len = c;
        wi = d;
    }
    void show()
    {
        System.out.println("X : " + x);
        System.out.println("Y : " + y);
        System.out.println("Length : " + len);
        System.out.println("Width : " + wi);
    }
    void move(int a, int b, int c, int d)
    {
        x = a;
        y = b;
        len = c;
        wi = d;
    }
}

class ShapeDemo
{
    public static void main(String[] args)
    {
        Line ln = new Line(5, 9, 6, 4);
        Circle c = new Circle(56, 87, 12);
        Rectangle r = new Rectangle(32, 46, 71, 52);
        shape sp;

        System.out.print("\033[H\033[2J");

        sp = ln;
        sp.show();
        System.out.println("");
        sp = c;
        sp.show();
        System.out.println("");
        sp = r;
        sp.show();

        System.out.println("\n\n--* Using Move Method *--\n\n");

        sp = ln;
        sp.move(65,78,55,48);
        sp.show();
        System.out.println("");
        sp = c;
        sp.move(20,12,22,0);
        sp.show();
        System.out.println("");
        sp = r;
        sp.move(62,87,45,48);
        sp.show();
    }
}