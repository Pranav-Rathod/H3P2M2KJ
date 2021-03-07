import java.util.Scanner;

public class AreaOfRactangle
{
    public static void main(String[] strings)
    {
        double width, height;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter width : ");
        width = s.nextDouble();

        System.out.print("Enter height : ");
        height = s.nextDouble();

        s.close();
    
        double perimeter = 2*(height + width);
             
        double area = width * height;			
             
        System.out.print("Perimeter is : \n" + perimeter);
        System.out.print("Area is : \n" + area);
    }
}