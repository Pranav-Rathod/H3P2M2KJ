class Employee
{
    String EmpName;
    int EmpID;

    Employee(String nam, int id)
    {
        EmpName = nam;
        EmpID = id;
    }
    void printData()
    {
        System.out.println("EmpName  : " + EmpName);
        System.out.println("EmpID  : " + EmpID);
    }
}

public class EmloyData
{
    public static void main(String[] args)
    {
        Employee emp = new Employee("Tapan",19);
        Employee emp2 = new Employee("Rajan",22);
        emp.printData();
        System.out.println("");
        emp2.printData();
    }
}