class CharToString
{
    public static void main(String[] args)
    {
        String str = "Hello My Name is Pranav";
        char[] ch = str.toCharArray();
        char[] ch2 = new char[str.length()];

        for(char c : ch)
        {
            System.out.print(c);
        }

        for(int i=0 ; i<str.length() ; i++)
        {
            ch2[i] = str.charAt(i);
        }

        System.out.println();

        for(char d : ch)
        {
            System.out.print(d);
        }
    }
}