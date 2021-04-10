class ExceptionDemo
{
    public static void main(String[] args)
    {
        try     //! ArithmeticException
        {
            int a=5,b=0;
            int c = a/b;
        }
        catch(ArithmeticException ar)
        {
            System.out.println(ar);
        }


        try     //! NullPointerException
        {
            String str = null;
            str.length();
        }
        catch(NullPointerException np)
        {
            System.out.println(np);
        }


        try     //! NegativeArraySizeException
        {
            int[] arr = new int[-3];
        }
        catch(NegativeArraySizeException nae)
        {
            System.out.println(nae);
        }


        try     //! ArrayIndexOutOfBoundsException
        {
            int[] arr = new int[5];
            arr[6] = 5;
        }
        catch(ArrayIndexOutOfBoundsException array)
        {
            System.out.println(array);
        }
    }
}