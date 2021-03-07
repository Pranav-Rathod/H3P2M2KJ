class OuterClass
{
    int a;
    static int b = 100;

    OuterClass(int val1)
    {
        this.a = val1;
    }

    static class staticClass
    {
        void display()
        {
            System.out.println("Value 1 is : " + b);    //! variable "a" will not accessible
        }
    }

    class InnerClass
    {
        void displayInner()
        {
            System.out.println("Value of a is : " + a);
            System.out.println("Value of b is : " + b);
        }
    }
}

class NestedClass
{
    public static void main(String[] args)
    {
        OuterClass objOuter = new OuterClass(6);                            //^ Object of "OuterClass"
        OuterClass.InnerClass InnerObj = objOuter.new InnerClass();         //^ Object of "InnerClass"
        OuterClass.staticClass objStatic = new OuterClass.staticClass();    //^ Object of "staticClass"
        objStatic.display();
        InnerObj.displayInner();
    }
}