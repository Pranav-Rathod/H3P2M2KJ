import java.util.Scanner;

class ParagraphOfText
{
    String s;
    String st[];
    int count = 0;

    ParagraphOfText(String str)
    {
        s = str;
    }

    void bubblesort()
    {
        int i;
        st = s.split(" ");
        for(i=0;i<(st.length)-1;i++)
        {
            for(int j=0;j<(st.length)-1;j++)
            {
                if(st[j].compareTo(st[j+1])>0)
                { 
                    String temp=st[j];
                    st[j]=st[j+1];
                    st[j+1]=temp;
                }
            } 
        }
        for(i=0;i<(st.length);i++)
        {
            if(st[i].charAt(0)>=64 && st[i].charAt(0)<=90)
            {
                count++;
            }
        }
    }

    void display()
    {
        System.out.println("Sorted Array");
        for(int i=0;i<(st.length);i++)
        {
            System.out.println(st[i]);
        }
        System.out.println("Start with capital Alphabet in array: "+count);
    }
    public static void main(String str[])
    {
        Scanner sc=new Scanner(System.in);
        String a;

        System.out.print("Enter tthe String: ");
        a=sc.nextLine();
        sc.close();

        ParagraphOfText spl = new ParagraphOfText(a);

        spl.bubblesort();
        spl.display();
    }
}