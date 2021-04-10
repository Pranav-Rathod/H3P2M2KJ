import java.util.Scanner;

public class Palindrome
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int num, ch=0;
        String str;

        System.out.println("1. Integer");
        System.out.println("2. String");
        System.out.println("3. Exit");
        System.out.print("Enter your Choice: ");
        ch = in.nextInt();

        switch (ch)
        {
            case 1: 
                    System.out.print("Enter your integer string: ");
                    num = in.nextInt();
                    int temp = num, rem = 0, sum = 0;
                    while(num > 0)
                    {
                        rem = num % 10;
                        sum = (sum*10)+rem;
                        num = num/10;
                    }
                    if(temp==sum)
                    {
                        System.out.println("Number is 'PALINDROME'");
                    }
                    else
                    {
                        System.out.println("Number is not 'PALINDROME'");
                    }
                    break;
        
            case 2:
                    String str2 = "";
                    System.out.print("Enter your string: ");
                    str = in.next();

                    for(int i=(str.length())-1 ; i>=0 ; i--)
                    {
                        str2 += str.charAt(i);
                    }

                    if(str.equals(str2))
                    {
                        System.out.println("String is 'PALINDROME'");
                    }
                    else
                    {
                        System.out.println("String is not 'PALINDROME'");
                    }
                    break;
            
                default:
                        System.out.println("Wrong Choice...!");
                        break;
        }
        in.close();
    }
}