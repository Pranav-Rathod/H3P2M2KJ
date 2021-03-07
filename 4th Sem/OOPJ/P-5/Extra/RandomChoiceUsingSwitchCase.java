import java.lang.Math;

public class RandomChoiceUsingSwitchCase
{
    public static void main(String[] args)
    {
        int num = (int)(Math.random() * 6) + 1;

        switch(num)
        {
            case 1: System.out.println("Scrambled eggs");
            break;

            case 2: System.out.println("Waffles");
            break;

            case 3: System.out.println("fruit");
            break;

            case 4: System.out.println("cereal");
            break;

            case 5: System.out.println("toast");
            break;

            case 6: System.out.println("yogurt");
            break;
    
            default: System.out.println("Wrong Choice..!");
            break;
        }
    }
}