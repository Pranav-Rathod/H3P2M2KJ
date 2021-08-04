import java.sql.*;
import java.util.Scanner;

class AIO
{
    public static void main(String[] args) throws Exception
    {
        int ch=0;
        int SerialNum;
        String Name,TableName="student",choice,Mobile;

        Object o = new Object();
        Scanner in = new Scanner(System.in);

        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/marwadi university", "root", "");
        Statement sta = con.createStatement();
        ResultSet re;
        
        while(true)
        {
            System.out.print("\033[H\033[2J");
            System.out.println("Select operation : ");
            System.out.print("\n1. Add Record\n2. Remove Record\n3. Modify Records\n4. Display Records\n\nEnter your choice : ");
            ch = in.nextInt();
            
            switch(ch)
            {
                case 1: 
                        System.out.println("\033[H\033[2J");
                        System.out.print("Enter Serial No. : ");
                        SerialNum = in.nextInt();
                        in.nextLine();
                        System.out.print("Enter Mobile no. : ");
                        Mobile = in.nextLine();
                        System.out.print("Enter Name : ");
                        Name = in.nextLine();
                        sta.executeUpdate("INSERT INTO "+TableName+" VALUES ("+SerialNum+",'"+Name+"','"+Mobile+"')");      //executeQuery will not work for multiple statment here
                        System.out.println("\nRecord Added Successfully..!");
                    break;

                case 2: 
                        System.out.println("\033[H\033[2J");
                        System.out.print("Enter Serial No. : ");
                        SerialNum = in.nextInt();
                        System.out.print("\nFollowing record will be deleted : \n");
                        re = sta.executeQuery("select * from "+TableName+" WHERE S_No = "+SerialNum+"");
                        re.next();
                        System.out.println(" " + re.getInt(1) + " " + re.getString(2) + " " + re.getString(3) + "\n\n");
                        synchronized (o)
                        {
                            o.wait(2500);
                        }
                        sta.executeUpdate("DELETE FROM "+TableName+" WHERE S_No = "+SerialNum+"");
                        in.nextLine();
                        System.out.println("Record Deleted Successfully..!");
                    break;

                case 3: 
                        System.out.println("\033[H\033[2J");
                        System.out.print("Enter Serial No. : ");
                        SerialNum = in.nextInt();
                        in.nextLine();
                        System.out.print("Enter New Name : ");
                        Name = in.nextLine();
                        System.out.print("Enter New Mobile no. : ");
                        Mobile = in.nextLine();

                        System.out.print("\nYour old record is : ");
                        re = sta.executeQuery("select * from "+TableName+" WHERE S_No = "+SerialNum+"");
                        re.next();
                        System.out.println("\n " + re.getInt(1) + " " + re.getString(2) + " " + re.getString(3) + "\n");

                        sta.executeUpdate("UPDATE "+ TableName +" SET Name = '"+Name+"', Mobile_No = '"+Mobile+"' WHERE S_No = "+SerialNum+"");
                        synchronized (o)
                        {
                            o.wait(2500);
                        }

                        System.out.print("\nYour updated record is : ");
                        re = sta.executeQuery("select * from "+TableName+" WHERE S_No = "+SerialNum+"");
                        re.next();
                        System.out.println("\n " + re.getInt(1) + " " + re.getString(2) + " " + re.getString(3) + "\n\n");
                        System.out.println("Record Updated Successfully..!");
                    break;

                case 4: 
                        System.out.println("\033[H\033[2J");
                        System.out.print("Your table contains following records : \n\n");
                        re = sta.executeQuery("select * from "+TableName+"");
                        while(re.next())
                        {
                            System.out.println(" " + re.getInt(1) + " " + re.getString(2) + " " + re.getString(3));
                        }
                        in.nextLine();
                        System.out.println("\n\nAll records displayed Successfully..!");
                    break;
                
                default: in.nextLine(); System.out.println("\nEnter valid input..!");
                    break;
            }
            System.out.print("\nWant to perform more operation (yes/no) : ");
            choice = in.nextLine();
            if(choice.equals("No") || choice.equals("N") || choice.equals("no") || choice.equals("n")){break;}
        }
        in.close();
        con.close();
    }
}