import java.sql.*;
import java.util.Scanner;

public class PS
{
    public static void main(String[] args) throws Exception
    {
        Scanner in = new Scanner(System.in);
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/marwadi university", "root", "");
        PreparedStatement ps = con.prepareStatement("select * from student WHERE S_No = ?");

        System.out.println("Enter a S_No : ");
        int no = in.nextInt();
        ps.setInt(1, no);

        ResultSet rs = ps.executeQuery();

        rs.next();
        System.out.println(" " + rs.getInt(1) + " " + rs.getString(2) + " " + rs.getString(3));

        PreparedStatement ps1 = con.prepareStatement("INSERT into student (Name,Mobile_No) VALUES (?,?)");

        System.out.println("Enter Mobile Number : ");
        int mob_no = in.nextInt();
        System.out.println("Enter Name : ");
        String nm = in.next();

        in.nextLine();
        
        ps1.setString(1, nm);
        ps1.setInt(2, mob_no);

        int result = ps1.executeUpdate();

        if(result > 0)
        {
            System.out.println("Record Inserted..!");
        }
        else
        {
            System.out.println("Problem in insertion..!");
        }

        System.out.println("Enter Mobile Number : ");
        int mob_no1 = in.nextInt();
        System.out.println("Enter Name : ");
        String nm1 = in.next();

        in.nextLine();
        
        ps1.setString(1, nm1);
        ps1.setInt(2, mob_no1);

        int result1 = ps1.executeUpdate();

        if(result1 > 0)
        {
            System.out.println("Record Inserted..!");
        }
        else
        {
            System.out.println("Problem in insertion..!");
        }

        PreparedStatement ps_del = con.prepareStatement("DELETE from student WHERE S_No = ?");
        System.out.println("Enter roll no for deletion : ");
        int r_no = in.nextInt();

        ps_del.setInt(1, r_no);

        int result_del = ps_del.executeUpdate();

        if(result_del > 0)
        {
            System.out.println("Record Deleted..!");
        }
        else
        {
            System.out.println("Problem in removal..!");
        }

        PreparedStatement ps_up = con.prepareStatement("UPDATE student SET Name=?, Mobile_No=? WHERE S_No=?");
        System.out.println("Enter roll no for update : ");
        int r_no1 = in.nextInt();
        System.out.println("Enter Mobile Number : ");
        String mob_no2 = in.next();
        System.out.println("Enter Name : ");
        String nm2 = in.next();
        ps_up.setInt(3, r_no1);
        ps_up.setString(1, nm2);
        ps_up.setString(2, mob_no2);


        int result_up = ps_up.executeUpdate();

        if(result_up > 0)
        {
            System.out.println("Record Updated..!");
        }
        else
        {
            System.out.println("Problem in Modification..!");
        }

        

        in.close();
        con.close();
    }
}