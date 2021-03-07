import java.util.List;
import java.util.ArrayList;
import java.util.Random;

class RandomChoiceUsingList
{
    public static void main(String[] args)
    {
        List<String> list = new ArrayList<String>(6);
        list.add("Scrambled eggs");
        list.add("Waffles");
        list.add("fruit");
        list.add("cereal");
        list.add("toast");
        list.add("yogurt");

        Random r = new Random();

        /*int index = r.nextInt(list.size());
        System.out.println(list.get(index));  */
        System.out.println(list.get(r.nextInt(list.size())));
    }
}
