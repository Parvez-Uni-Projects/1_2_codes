import java.util.Scanner;

public class TestQuadrilateral {

    static Scanner scanner=new Scanner(System.in);
    public static void main(String[] args) throws Exception {

        System.out.println("Input 1 value: ");
        double Square1 =scanner.nextDouble();
        
        System.out.println("Input 2 value: ");
        double Rectangle1 =scanner.nextDouble();
        double Rectangle2 =scanner.nextDouble();

        System.out.println("Input 3 value: ");

        // double[]Trapezium={};

        // for (int i =0 ;i < 3 ;i ++)
        //     {
        //         Trapezium[i] = scanner.nextDouble();
        //     }
        double Trapezium1 =scanner.nextDouble();
        double Trapezium2 =scanner.nextDouble();
        double Trapezium3 =scanner.nextDouble();


        // Quadrilateral res1, res2 , res3 = new Quadrilateral();
        Quadrilateral res1 = new Quadrilateral();
        Quadrilateral res2 = new Quadrilateral();
        Quadrilateral res3 = new Quadrilateral();

        Quadrilateral obj1 = new Quadrilateral();
        CreateQuadrilateral obj2 = new CreateQuadrilateral(obj1);

        String Area = " Area: ";


        res1 = obj2.generateQuad(Square1);
        System.out.println(res1.getType()+ Area + res1.getQuadArea());

        res2 = obj2.generateQuad(Rectangle1, Rectangle2);
        System.out.println(res2.getType()+ Area + res2.getQuadArea());

        res3 = obj2.generateQuad(Trapezium1, Trapezium2, Trapezium3);
        System.out.println(res3.getType()+ Area + res3.getQuadArea());

        System.out.println("Hello, World!");
    }
}
