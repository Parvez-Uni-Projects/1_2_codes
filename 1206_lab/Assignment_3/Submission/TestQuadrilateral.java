import java.util.Scanner;

public class TestQuadrilateral {

    static Scanner scanner=new Scanner(System.in);
    public static void main(String[] args) throws Exception {

        //scanning the user inputs from the user
        System.out.println("Input 1 value: ");
        double Square1 =scanner.nextDouble();
        
        System.out.println("Input 2 value: ");
        double Rectangle1 =scanner.nextDouble();
        double Rectangle2 =scanner.nextDouble();

        System.out.println("Input 3 value: ");

        double Trapezium1 =scanner.nextDouble();
        double Trapezium2 =scanner.nextDouble();
        double Trapezium3 =scanner.nextDouble();

        Quadrilateral Square = new Quadrilateral(); //creating objects of the quadrilateral class using the constructor
        Quadrilateral Rectangle = new Quadrilateral();
        Quadrilateral Trapezium = new Quadrilateral();


        CreateQuadrilateral obj2 = new CreateQuadrilateral(); //creating objects of the CreateQuadrilateral class using the constructor

        String Area = " Area: ";

        //printing the results 
        // here we are passing the parameter to the method using the object of CreateQuadrilateral which is returning a object of quadrilateral and we are storing that object in another object whichs type is quadrilateral and later on printing the values 

        Square = obj2.generateQuad(Square1);
        System.out.println(Square.getType()+ Area + Square.getQuadArea());

        Rectangle = obj2.generateQuad(Rectangle1, Rectangle2);
        System.out.println(Rectangle.getType()+ Area + Rectangle.getQuadArea());

        Trapezium = obj2.generateQuad(Trapezium1, Trapezium2, Trapezium3);
        System.out.println(Trapezium.getType()+ Area + Trapezium.getQuadArea());

    }
}
