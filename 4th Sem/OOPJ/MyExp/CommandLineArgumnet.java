public class CommandLineArgumnet
{
    public static void main(String[] args)
    {
        if(args.length > 0)
        {
            System.out.println("Command Lines are Follows : \n");
            
            for(String s : args)
            {
                System.out.println(s);
            }
        }
        else
        {
            System.out.println("Not in CLA..!");
        }
    }
}