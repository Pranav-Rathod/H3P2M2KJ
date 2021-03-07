public class Tax
{
    public static void main(String args[])
    {
        float a,b,rs;
        int taxrs,taxpaisa;

        a = (float)5000;
        b = (float)((35.00*a)/100.00);
        rs = (float)(b*73.00);
        taxrs = (int)rs;
        taxpaisa = (int)((rs-taxrs)*100);

        System.out.println("Tax Rate in Dollars = " + b);
        System.out.println("Tax Rate in Rs = " + taxrs);        //! it is unconditional
        System.out.println("Tax Rate in Paisa = " + taxpaisa);
    }
}