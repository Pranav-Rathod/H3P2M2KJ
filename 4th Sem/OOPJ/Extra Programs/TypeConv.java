public class TypeConv
{
    public static void main(String[] args) 
    {
        byte b;
        int i1 = 123;
        double d1 = 456.789;
        double d = 259295.02;
        long l = (long)d;
        int i = (int)l;

        b = (byte)i1;
        System.out.println("int to byte " + b);

        b = 0;
        b = (byte)d1;
        System.out.println("Double to byte " + b);

        System.out.println("Double value " + d);
        System.out.println("Long value " + l);
        System.out.println("Int value " + i);
    } 
}