import java.util.Scanner;

public class CostEstimation {

    static Scanner scanner =new Scanner(System.in);
    public static void main(String[] args) throws Exception {

        System.out.println("Number of Pages: "); 
        int numberOfPages=scanner.nextInt();
        System.out.println("Cost Per Page: ");
        int costPerPage=scanner.nextInt();

        Book         obj1 = new Book(numberOfPages,costPerPage);
        TotalPricing obj2 = new TotalPricing(obj1);
        obj2.finalCost(obj1);
    }
}
