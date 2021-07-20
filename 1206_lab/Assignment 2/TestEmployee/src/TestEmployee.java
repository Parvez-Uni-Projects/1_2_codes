import java.util.Scanner; //*importing the scanner class for scanning

public class TestEmployee 
{
    //*creating a object using the scanner class for scanning the system input
    static Scanner scanner=new Scanner(System.in);

    public static void main(String[] args) throws Exception {

        
        //* Taking the user input using the scanner object
        System.out.println("Total Projects: "); 
        int totalProjects=scanner.nextInt();
        System.out.println("Total Months: ");
        int totalMonths=scanner.nextInt();


        //*creating two object for the classes  
        Developer dev1 =new Developer(totalProjects,totalMonths);
        HROfficer obj2 =new HROfficer();


        //* passing dev1 object as a perameter in checkperformance method  
        obj2.checkPerformance(dev1);


        //* TO check the getter and setter method 
        // System.out.println ("Total Project is: " + dev1.gettotalProjects());
        // System.out.println ("Total Month is: " + dev1.gettotalMonths()); 
    }
}