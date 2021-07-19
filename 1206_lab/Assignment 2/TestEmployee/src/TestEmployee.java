import java.util.Scanner;

public class TestEmployee {
    
    static Scanner scanner=new Scanner(System.in);

    public static void main(String[] args) throws Exception {

        System.out.println("Total Projects: ");
        int totalProjects=scanner.nextInt();
        System.out.println("Total Months: ");
        int totalMonths=scanner.nextInt();

        Developer dev1 =new Developer(totalProjects,totalMonths);

       
        System.out.println ("Total Project is: " + dev1.gettotalProjects());
        System.out.println ("Total Month is: " + dev1.gettotalMonths());  
    }
}
