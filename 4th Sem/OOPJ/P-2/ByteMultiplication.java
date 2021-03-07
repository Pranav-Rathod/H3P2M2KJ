
/* =============================================================================
    Write a console program to define and initialize a variable of type byte to 1
    and then successively multiply it by 2 and display its value 8 times.
    Explain the reason for the last result.
============================================================================== */

class ByteMultiplication
{
    public static void main(String[] args)
    {
        byte b = 1;
        int a = 1;

        while(a <= 8)
        {
            b = (byte)(b*2);
            System.out.println(b);
            a++;
        }

        b = 1;
        System.out.println();

        for(int i=1 ; i<= 8 ; i++)
        {
            b = (byte)(b*2);
            System.out.println(b);
        }
    }
}

/* =============================================================================
    REASON :- BYTE RANGE IS -128 TO 127, SO IN THIS CASE 64*2=128 BUT BYTE RANGE
    UPTO 127 SO IT WILL STARTS FROM -128 THAT'S WHY LAST TWO OUTPUT IS -128 AND 0
============================================================================== */